/*
 * 	make a demo about union and enum.
 * 	union is not convient, so we should use it as less as possible.
 */
#include <iostream>
#include <string>
using namespace std;

class Entry{
private:
		enum class Tag {number, tect};
		Tag type;	// to judge between number and text
		union {		// anonymous union, union with hidden name
				int i;
				string s;
		};
public:
		struct Bad_entry{};	// to deal with error
		
		~Entry();
		Entry& operator=(const Entry&);	// it's essential because of string type
		Entry(const Entry&);

		int number() const;
		string text() const;
		
		void set_number(int n);
		void set_text(const string&);

};

int Entry::number() const{
		if (type != Tag::number)
				throw Bad_entry{};
		return i;
}

string Entry::text() const{
		if (type != Tag::text)
				throw Bad_entry();
		return s;
}

void Entry::set_number(int n){
		if (type==Tag::text){
				s.~string();
				type = Tag::number;
		}
		i = n;
}

void Entry::set_text(const string& ss){
		if (type==Tag::text)
				s = ss;
		else{
				new(&s) string{ss};	// p = new string{ss}; s = *p;
				type = Tag::text;
		}
}

Entry& Entry::operator=(const Entry& e){
		if (type==text && e.type==text){
				s = e.s;
				return *this;
		}

		if (type==Tag::text)	s.~string();

		switch (e.type){
				case Tag::number:
						i = e.i;
						break;
				case Tag::string:
						new(&s) string{e.s};
						break;
				}
		type = e.type;
		return *this;
}

Entry::~Entry(){
		if (type==Tag::text)
				s.~string();
}
				
Entry::Entry(const Entry& e){
		type = Tag::text;
		s.string();
		this->operator(e);
}

