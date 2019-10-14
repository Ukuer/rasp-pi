// queue
const int MAXSIZE 100;
typedef int ElementType;
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
