/*
 * Stack.h
 *
 *  Created on: 2019年10月13日
 *      Author: Jianlong  Jin
 */
#include <iostream>
using namespace std;
typedef int ElementType;

#ifndef STACK_H_
#define STACK_H_
#define MAXSIZE 100
class AStack {
    ElementType *Data;
    int top;
    int size;
public:
    AStack(int n);
    ~AStack();
    void Push(ElementType item);
    ElementType Pop();
    bool Empty();
    bool Full();
};

#endif /* STACK_H_ */

AStack::AStack(int n){
    Data = new ElementType[MAXSIZE];
    top = -1;
    size = n;
}

AStack::~AStack(){
    delete Data;
}

void AStack::Push(ElementType item){
    if (top == MAXSIZE-1){
		printf("Stack is Full");
        return ;
    }
    Data[++ top] = item;
}

ElementType AStack::Pop(){
    return Data[top --];
}

bool AStack::Empty(){
    if (top == -1)
        return true;
    return false;
}

bool AStack::Full(){
	if (top >= size-1)
		return true;
	return false;
}
