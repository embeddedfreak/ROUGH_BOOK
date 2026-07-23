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

class Linked_List {
public:
	Node *head, *tail;

	Linked_List() {
		head = tail = NULL;
	}


	void reverse()
	{
		Node* prev = NULL;
		Node* curr = head;
		Node* next =  NULL;

		while(curr != NULL) {
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}

		head = prev;
	}

	void printll() 
	{
		if(head == NULL) {
			cout<<"Linked List is empty"<<endl;
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
	Linked_List ll;
	ll.head = new Node(10);
	ll.head->next = new Node(20);
	ll.head->next->next = new Node(30);
	ll.head->next->next->next = new Node(40);
	ll.head->next->next->next->next = new Node(50);
	
	ll.printll();

	ll.reverse();

	ll.printll();



	return 0;
}
