#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int val) {
		data = val;
		next = NULL;
	}
};

class Linklist {
public:
	Node *head, *tail;

	Linklist() {
		head = tail = NULL;
	}

	void printll()
	{
		if(head == NULL) {
			cout<<"Linked List is empty"<<endl;
			return;
		}

		Node* temp = head;

		while(temp != NULL) {
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<endl;
	}

	void reversell()
	{
		if(head == NULL) {
			cout<<"Linked List is empty"<<endl;
			return;
		}

		if(head->next == NULL) {
			return;
		}

		Node* prev = NULL;
		Node* next = NULL;

		Node* curr = head;

		tail = head;

		while(curr != NULL) {
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}

		head = prev;
	}
};

int main()
{
	Linklist ll;
	ll.head = new Node(10);
	ll.head->next = new Node(20);
	ll.head->next->next = new Node(30);
	ll.head->next->next->next  = new Node(40);
	ll.tail = ll.head->next->next->next->next = new Node(50);

	ll.printll();

	cout<<"After reversing the linked list"<<endl;

	ll.reversell();
	
	ll.printll();


}
