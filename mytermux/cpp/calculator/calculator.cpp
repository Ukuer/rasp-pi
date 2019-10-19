/*
 * 	make a calculator
 */

#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <cctype>
using namespace std;

enum class Kind: char{
		name, number, end, 
		plus='+', minus='-', mul='*', div='/', 
		print=';',assign='=', lp='(', rp=')'
};

struct Token {
		Kind kind;
		strng name_value;
		double number_value;
};

double expr(bool get){	// to plus and minus

		double left = term(get);
		
		for (;;){
				switch (ts.current().kind){
				case Kind::plus:
						left += term(true);
						break;
				case Kind::minus:
						left -= term(true);
						break;
				default:
						return left;
				}
		}
}

double term(bool get){	// to mul and div

		double left = prim(get);

		for (;;){
				switch (ts.current().kind){
				case Kind::mul:
						left *= prim(true);
						break;
				case Kind::div:
						if (auto d = prim(true)){
								left /= d;
								break;
						}
						return error("divide by 0");
				default:
						return left;
				}
		}
}

double prim(bool get){	// deal with primary things

		if (get)	ts.get();	// read next word

		switch (ts.current().kind){
		case Kind::number:
		{		double v = ts.current().number_value;
				ts.get();
				return v;
		}
		case Kind::name:
		{		double &v = table[ts.current().string_value];
				if (ts.get().kind == Kind::assign) v = expr(true);
				return v;
		}
		case Kind::minus:
				return -prim(true);
		case Kind::lp:
		{		auto e = expr(true);
				if (ts.current().kind != Kind::rp) return error("')' excepted ");
				ts.get();
				return e;
		}
		default:
				return error("primary excepted");
		}
}

class Token_stream {
public:
		Token_stream(istream& s):ip{&s},owns{false} { }
		Token_stream(istream* p):ip{p},owns{true} { }

		~Token_stream() { close(); }

		Token get();		// read and return the next word
		Token& current();	// the word reading just now

		void set_input(istream& s){ close(); ip=&s; owns=false; }
		void set_input(istream* p){ close(); ip=p; owns=true; }

private:
		void close(){ if (owns) delete ip; }

		istream* ip;
		bool owns;
		Token ct{Kind::end};
};

Token Token_stream::get(){

		char ch = 0;
		*ip >> ch;

		switch(ch){
		case 0:
				return ct={Kind::end};
		case';': case'*': case'/': case'+': case'-': case'(': case')':
		case'=':
				return ct={static_cast<Kind>(ch)};
		case'0': case'1': case'2': case'3': case'4': case'5': case'6':
		case'7': 'case'8': case'9': case'.':
				ip->putback(ch);		// put ch back
				*ip >> ct.number_value;
				ct.kind = Kind::number;
				return ct;
		default:
				if (isalpha(ch)){
						ip->putback(ch);
						*ip >> ct.string_value;
						ct.kind = Kind::name;
						return ct;
				}

				error("bad token");
				return ct={Kind::print};
		}
}

double error(const string& s){

		no_of_error++;
		ceer << "error:" << s << "\n";
		return 1;
}

Token_stream ts{cin};
int no_of_errors;
map<string,double> table;

void calculate(){
		for (;;){
				ts.get();
				if (ts.current().kind == Kind::end) break;
				if (ts.current().kind == Kind::print) break;
				cout << expr(false) << '\n';
		}
}

int main(int argc, char* argv[]){

		switch(argc){
		case 1:
				break;
		case 2:
				ts.set_input(new istringstream{argv[1]});
				break;
		default:
				error("too many aruments");
				return 1;
		}

		table["pi"] = 3.141592653589793;
		table["e"] = 2.718281828;

		calculate();

		return on_of_errors;
}
