### 第三章作业

##### 3.1 对于一个栈的输入序列：a1, a2, a3, ... , an , 称由此栈依次出栈后所得的元素序列为栈的合法输出序列。例如，例如，假设栈S的一个输入序列为1, 2, 3, 4, 5, 则可以得到多个输出序列，例如1, 2 , 3, 4, 5 就是一个合法的输出序列，同理 5, 4, 3, 2, 1 和 3, 2, 1, 4, 5也分别是其合法的输出序列。分别求解下列问题：

（1）判断序列1，3，4，5，2 是否是合法的输出序列。

（2）对输入序列1，2，3，4，5，求出其所有的合法的输出序列。

（3）设计算法以判断对输入序列1，2，3，……，n ，序列a1，a2，……，an是否是该栈的合法的输出序列（假设输出序列在数组A中）

分析：（1）是，对应操作：进，出，进，进，出，进，出，出

（2）

```c++

```



##### 3.5 设计出链栈的各个基本问题求解的算法，并分析其时间复杂度。

```c++
struct LNode {
    ElementType Data;
    LNode *next;
};
class LStack {
    LNode *Head;
    LNode *top;
public:
    LStack();
    ~LStack();
    void Push (ElementType item);
    ElementType Pop();
    bool Empty();
};
LStack::LStack(){
    Head = new LNode;
    Head->next = nullptr;
    top = Head;
}
LStack::~LStack(){
    LNode *back, *fore;
    back = Head; 
    while (back != nullptr){
        fore = back->next;
        delete back;
        back = fore;
    }
}
void LStack::Push(ElementType item){
    LNode *New = new LNode;
    New->Data = item;
    New->next = top->next;
    top->next = New;
}
ElementType LStack::Pop(){
    LNode *pNode = top->next;
    ElementType item = pNode->Data;
    top->next = pNode->next;
    delete pNode;
    return item;    
}
bool LStack::Empty(){
    if (top->next == nullptr)
        return true;
    return false;
}
```



##### 3.8 用一个数组，头指针和元素个数合在一起构成的结构来存储顺序队列，设计算法以实现队列的各运算。

```c++
const int MAXSIZE 100;
class Queue{
		ElementType *head;
		int sz;
public:
		Queue():head{new ElementType[MAXSIZE]},sz=0{ };
		~Queue(){	delete head;	};
		void push(ElementType item);
		ElementType pop();
		int size(){	return sz;	};
		bool empty();
		bool full();
};

void Queue::push(ElementType item){
		if (this->full()){
				printf("queue is full\n");
				return ;
		}
		*(head+sz) = item;
		++sz;
};
ElementType Queue::pop(){
		if (this->empty()){
				printf("queue is empty\n");
				return -1;
		}
		--sz;
		ElementType res = *(head+sz);
		return sz;
}
bool Queue::empty(){
		return sz==0;
}
bool Queue::full(){
		return sz==MAXSIZE;
}
```



##### 3.9 对教材中所讨论的循环队列及其约定，给出求解队列中元素个数的表达式。



##### 3.11 如果采用带尾指针的单循环链表作为队列的存储结构，设计算法以实现队列的各运算。
```c++
class LinkQueue{
		Node *head;
		Node *tail;
		int sz;
public:
		LinkQueue():sz{0},head{InitLink()},tail{head} {	};
		~LinkQueue(){	DeleteLink(head);	};
		void push(ElementType item);
		ElementType pop();
		bool empty();
		bool full();
		bool size();
};
void LinkQueue::push(ElementType item){
		tail->data = item;
		tail = tail->next;
		++sz;
}
ElementType LinkQueue::pop(){
	if (this->empty()){
		cout << "queue is empty" << endl;
		return ;
	}
	ElementType res = head->data;
	head = head->next;
	--sz;
	return res;
}
bool LinkQueue::empty(){
	if (head==tail)
		return true;
	return false;
}
bool LinkQueue::full(){
	if (tail->next == head)
		return true;
	return false;
}
int LinkQueue::size(){
	return sz;
}

```