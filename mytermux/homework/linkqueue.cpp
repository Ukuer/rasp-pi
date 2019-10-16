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

