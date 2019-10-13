#include <iostream>
#include <chrono>	// header file for clock
using namespace std::chrono;	// subnamespace of std;

void f(){
		for (int i=0; i<1e8; ++i);
}

int main(){
		auto t0 = high_resolution_clock::now();		// begin
		f();
		auto t1 = high_resolution_clock::now();		// end
		auto msec = duration_cast<milliseconds>(t1-t0).count();
		printf("the time is %lld ms.\n", msec);
		//std::cout << msec ;
		return 0;
}
