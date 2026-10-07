#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int val) {
		data = val;
	}

};

class Linked_list {
public:
	Node* head;
	Node* tail;

	Linked_list() {
		head = tail = NULL;
	}

	void push_front(int val)
	{
		Node* newNode = new Node(val);

		if(head == NULL) {
			head = tail = newNode;
			return;
		}

		newNode->next = head;
		head = newNode;
	}

	void push_back(int val)
	{
		Node* newNode = new Node(val);

		if(head == NULL) {
			head = tail = NULL; 
		}

		tail->next = newNode;
		tail = tail->next;
	}

	void print_ll()
	{
		if(head == NULL) {
			cout<<"Linked List is Empty"<<endl;
			return;
		}

		Node* temp = head;

		while(temp!=NULL) {
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<endl;
	}
};

int main()
{
	Linked_list ll;
	ll.push_front(10);
	ll.push_front(20);
	ll.push_front(30);

	ll.push_back(40);
	ll.push_back(50);

	ll.print_ll();

	return 0;
}
