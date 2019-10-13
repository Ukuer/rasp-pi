#include "Vector.h"
#include <string>

int main(){
	string a("Hello "),
	       b("Vector!");
	Vector<string>  myvector;
	myvector.push_back(a);
	myvector.push_back(b);
	printf("the lenght of vector is %d\n",
			myvector.size());
	return 0;
}
