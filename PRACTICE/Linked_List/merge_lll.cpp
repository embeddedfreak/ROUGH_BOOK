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

Node* merge_ll(Node* head1, Node* head2) 
{
	//base condition
	if(head1 == NULL || head2 == NULL) {
		return head2? head2 : head1;
	}

	if(head1->data <= head2->data) {
		head1->next = merge_ll(head1->next, head2);
		return head1;
	} else {
		head2->next = merge_ll(head1, head2->next);
		return head2;
	}
}

int main()
{
	Linked_List ll;
	ll.head = new Node(10);
	ll.head->next = new Node(30);
	ll.head->next->next = new Node(50);
	ll.head->next->next->next = new Node(60);

	ll.tail = ll.head->next->next->next;

	printll(ll.head);
	
	Linked_List ll1;
	ll1.head = new Node(20);
	ll1.head->next = new Node(30);
	ll1.head->next->next = new Node(40);
	ll1.head->next->next->next = new Node(70);

	ll.tail = ll.head->next->next->next;

	printll(ll1.head);
	
	Node* newhead = merge_ll(ll.head, ll1.head);

	printll(newhead);
	
	return 0;
}
