#include <iostream>
using namespace std;
#ifndef VECTOR_H
#define VECTOR_H
template <typename T>
class Vector {
	int sz;
	T* elem;
public:
	Vector();
	Vector(int s);
	Vector(int s, T item);
	~Vector();
	void push_back(T item);
	int size();
};
#endif
