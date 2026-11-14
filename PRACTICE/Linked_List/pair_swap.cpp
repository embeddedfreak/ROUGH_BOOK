#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int val)  {
		data = val;
		next = NULL;
	}
};

class Linked_List {
public:
	Node* head;
	Node* tail;

	Linked_List() {
		head = tail = NULL;
	}
};

void printll(Node* head)
{
	if(head == NULL) {
		return;
	}

	Node* temp = head;

	while(temp!= NULL) {
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

//10->20->30->40->50
Node* swap_pair(Node* head) {
	
	if(head == NULL || head->next == NULL) {
		return head;
	}

	Node* first = head;
	Node* second = head->next;	

	first->next = swap_pair(second->next);

	second->next = first;

	return second;
}

int main()
{
	Linked_List ll;
	ll.head = new Node(10);
	ll.head->next = new Node(20);
	ll.head->next->next= new Node(30);
	ll.head->next->next->next = new Node(40);
	ll.tail = ll.head->next->next->next->next = new Node(50);

	printll(ll.head);

	Node* newhead = swap_pair(ll.head);
	printll(newhead);
	return 0;
}
