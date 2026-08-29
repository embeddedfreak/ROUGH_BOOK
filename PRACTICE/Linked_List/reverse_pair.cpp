#include<iostream>

using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int val) 
	{
		data = val;
		next = NULL;
	}
};

class Linked_List {
public:
	Node* head;
       	Node* tail;

	Linked_List()
	{
		head = tail = NULL;
	}	
};

void printll(Node* head)
{
	if(head == NULL) {
		cout<<"printll: Linked List is Empty"<<endl;
		return;
	}

	Node* temp = head;
	while(temp != NULL)  {
		cout<<temp->data<<"->";
		temp = temp->next;
	}

	cout<<endl;
}

Node* reverse_pair(Node* head) 
{
	if(head == NULL || head->next == NULL) {
		return head;
	}

	Node* prev = NULL;
	Node* first = head;
	Node* second = head->next;
	
	while(first!=NULL && second!=NULL) {
		Node* nextfirst = second->next;
		second->next = first;
		first->next = nextfirst;
		if(prev!=NULL)
		       prev->next=second;
		else
			head = second;
		
		//update
		prev = first;
		first = nextfirst;
		if(nextfirst!=NULL)
			second = nextfirst->next;
		else
			second = NULL;
	}

	return head;
}

int main()
{
	Linked_List ll;
	ll.head = new Node(10);
	ll.head->next = new Node(20);
	ll.head->next->next = new Node(30);
	ll.head->next->next->next = new Node(40);
	ll.head->next->next->next->next = new Node(50);

	ll.tail = ll.head->next->next->next->next;

	printll(ll.head);

	Node* newhead = reverse_pair(ll.head);	
	printll(newhead);
	
	return 0;
}
