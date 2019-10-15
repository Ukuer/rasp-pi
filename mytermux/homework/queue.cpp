// queue
const int MAXSIZE 100;
typedef int ElementType;
class Queue{
		ElementType data[MAXSIZE];
		ElementType *head;
		int sz;
public:
		Queue():head{data},sz=0{ };
		~Queue(){	};
		void push(ElementType item);
		ElementType pop();
		int size(){	return (data+sz)-head;	};
		bool empty();
		bool full();
};

void Queue::push(ElementType item){
		if (this->full()){
				printf("queue is full\n");
				return ;
		}
		*(data+sz) = item;
		++sz;
};
ElementType Queue::pop(){
		if (this->empty()){
				printf("queue is empty\n");
				return -1;
		}
		--sz;
		ElementType res = *(head++);
		return res;
}
bool Queue::empty(){
		return sz==0;
}
bool Queue::full(){
		return sz==MAXSIZE;
}
