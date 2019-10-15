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
		bool full;
		bool sz;
};
void LinkQueue::push(ElementType item){
		tail->data = item;
		tail = tail->next;
		++sz;
}
ElementType LinkQueue::pop

