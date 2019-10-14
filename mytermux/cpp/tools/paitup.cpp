#include <iostream>
#include <utility>		// pair and tuple declation
#include <string>
#include <vector>
using namespace std;

void f(vector<string>& v){

		auto pp = make_pair(v.begin(), 2);	
		// the type of pp is pair< vector<string>::iterator, int>
}

void g(){

		tuple<string, int, double> t2{"Sily", 3, 3.14L};

		auto t = make_tuple(string("Herring"), 10, 1.23L);
		// the type of t is tuple<string,int,double>

		string s = get<0>(t);	// get 1st elem of t
		int x = get<1>(t);
		double d = get<2>(t);
}

