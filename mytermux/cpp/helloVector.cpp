#include "Vector.h"
#include <string>

template <typename T>
Vector<T>::Vector():sz{0},elem{nullptr} { }

template <class T>
Vector<T>::Vector(int s):sz{s},elem{new T[sz]} { }

template <class T>
Vector<T>::Vector(int s, T item):sz{s},elem{new T[sz]}{
	for(int i=0; i < sz; ++i)
		elem[i] = item;
}

template <class T>
Vector<T>::~Vector(){
	if (elem != nullptr)
		delete [] elem;
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
}
int main(){
	string a("Hello "),
	       b("Vector!");
	Vector<string>  myvector;
	myvector.push_back(a);
	myvector.push_back(b);
	printf("the lenght of vector is %d\n",
			myvector.size());
	return 0;
};
