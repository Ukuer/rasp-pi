// queue
const int MAXSIZE 100;
typedef int ElementType;
class Queue{
		ElementType data[MAXSIZE];
		ElementType *head;
		int len;
public:
		Queue():head{data},len=0{ };
		~Queue(){	};
		void push(ElementType item);
		ElementType pop();
		int size(){	return (data+len)-head;	};
		bool empty();
		bool full();
};

void Queue::push(ElementType item){
		if (this->full()){
				printf("queue is full\n");
				return ;
		}
		*(data+len) = item;
		++len;
};
ElementType Queue::pop(){
		if (this->empty()){
				printf("queue is empty\n");
				return -1;
		}
		ElementType res = *(head++);
		return res;
}
bool Queue::empty(){
		return (data+len)==head;
}
bool Queue::full(){
		return sz==MAXSIZE;
}
