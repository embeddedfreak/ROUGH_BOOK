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

class Linked_List {
public:
	Node* head;
	Node* tail;

	Linked_List() {
		head = tail = NULL;
	}

	void print_ll() 
	{
		Node* temp = head;

		while(temp!=NULL) {
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<endl;
	}

	void reverse()
	{
		if(head == NULL || head->next == NULL) {
			return;
		}

		Node* curr = head;
		Node* prev = NULL;

		while(curr!=NULL) {
			Node* next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}

		head = prev;
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

	ll.tail = ll.head->next->next->next->next;

	ll.print_ll();

	ll.reverse();

	ll.print_ll();

	return 0;
}

