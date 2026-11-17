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
void mid_ll(Node* head) {
	if(head == NULL || head->next == NULL) {
		cout<<"Few elements in linked list"<<endl;
		return;
	}

	Node* slow = head;
	Node* fast = head;

	while(fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}

	cout<<"Mid element is :"<<slow->data<<endl;
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

	mid_ll(ll.head);
	return 0;
}
