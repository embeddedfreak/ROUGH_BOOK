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

Node* reverse(Node* head) 
{
	Node* prev = NULL;
	Node* curr = head;
	
	while(curr!=NULL) {
		Node* next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	return prev;
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

	Node* newhead = reverse(ll.head);	
	printll(newhead);
	
	return 0;
}
