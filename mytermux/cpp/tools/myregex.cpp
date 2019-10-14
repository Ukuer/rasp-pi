#include <iostream>
#include <string>
#include <vector>
#include <regex>
using namespace std;

void f(){

		regex pat(R"(\w{2}\s *\d{5}(-\d{4})?)");	
		// raw string literal starts with R"( and end with )"
		cout << "pattern:" << pat << endl;

		int lineno = 0;
		for(string line; getline(cin, line);){
				++ lineno;
				smatch matches;		
				// to storoge substring, the type is smatch 
				if (regex_search(line, matches, pat))
						cout << lineno << ":" << matches[0] << endl;

				// if no-finding, return false; 
				// smatch is vector<string>
		}
}
