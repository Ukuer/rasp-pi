#include <iostream>
#include <algorithm>
#include <initializer_list>
using namespace std;

#ifndef VECTOR_H
#define VECTOR_H

template <typename T>
class Vector {
	int sz;
	T* elem;
public:
	// constructor
	Vector();
	Vector(int s);
	Vector(int s, T item);
	Vector(initializer_list<T> lst);
	Vector(const Vector& a);	// copy constructor
	Vector(Vector&& a);			// move constructor
	~Vector();

	Vector& operator=(const Vector& a);	// copy operator=
	Vector& operator=(Vector&& a);		// move operator=
	T& operator[](int i);
	void push_back(T item);
	int size();
};
#endif

template <class T>
Vector<T>::Vector():sz{0},elem{nullptr} { }

template <class T>
Vector<T>::Vector(int s):sz{s},elem{new T[sz]} { }

template <class T>
Vector<T>::Vector(int s, T item):sz{s},elem{new T[sz]}{
	for(int i=0; i < sz; ++i)
		elem[i] = item;
}

template <class T>
Vector::Vector(initializer_list<T> lst){
		sz = lst.size();
		elem = new T [sz];
		copy(lst.begin(), lst.end(), elem);
}

template <class T>
Vector<T>::Vector(const Vector& a){
		sz = a.size();
		elem = new T[sz];
		copy(a[0], a[a.sz], elem);
}

template <class T>
Vector<T>::Vector(Vector&& a):elem{a.elem},sz{a.sz}{
		a.elem = nullptr;
		a.sz = 0;
}

template <class T>
Vector<T>::~Vector(){
	if (elem != nullptr)
		delete [] elem;
}

template <class T>
Vector& Vector<T>::operator=(const Vector& a){
		if (sz != a.size){
				delete [] elem;
				sz = a.size();
				elem = new T[sz];
		}
		copy(a[0], a[a.size()], elem);
		return *this;
}

template <class T>
Vector& Vector<T>::operator=(Vector&& a):elem{a.elem},sz{a.sz}{
		a.elem = nullptr;
		a.sz = 0;
}

template <class T>
T& Vector<T>::operator[](int i){
		return elem[i];
}

template <class T>
int Vector<T>::size(){
	return sz;
}

template <class T>
void Vector<T>::push_back(T item){
	T *nelem = new T [++sz];
	for (int i=0; i<sz-1; ++i)
		nelem[i] = elem[i];
	nelem[sz-1] = item;
	delete [] elem;
	elem = nelem;
