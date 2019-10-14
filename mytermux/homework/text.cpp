/*
 * text.cpp
 *
 *  Created on: 2019年10月13日
 *      Author: Jianlong  Jin
 */
#include "Stack.h"
typedef AStack Stack;
bool mypush(Stack S, int a[], int &index, int n){	// 实现自动判断能否压入
	while (n--){
		if (S.Full() || index >= 4)
			return false;
		S.Push(a[index]);
		++index;
	}
	return true;
}

bool mypop(Stack S, int a[], int n){
	while (n--){
		if (S.Empty())
			return false;
		printf(" %d ", S.Pop());
	}
	return true;
}

void push_all(Stack S, int a[], int index);
void pop_all(Stack S, int a[], int index);

void push_all(Stack S, int a[], int index){
	for (int i=1; i<=4; ++i){
		if (index>=4)	return;
		int this_index = index;
		if (!mypush(S, a, this_index, i))
			break;
		pop_all(S, a, this_index);
	}
	return;
}

void pop_all(Stack S, int a[], int index){
	for (int i=1; i<=4; ++i){
		if (index>=4 && S.Empty())
				return;
		if (!mypop(S, a, i))
			break;
		push_all(S, a, index);
	}
	return ;
}

int main(){
	Stack S(4);
	int a[4]{1,2,3,4};
	int index = 0;
	push_all(S, a, index);

	return 0;
}
