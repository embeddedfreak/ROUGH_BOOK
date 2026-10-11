#include<iostream>

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

class Linked_list {
public:
	Node* head;
	Node* tail;

	Linked_list() {
		head = tail = NULL;
	}

	void printll()
	{
		if(head == NULL) {
			cout<<"Linked list is Empty"<<endl;
			return;
		}

		Node* temp = head;
		while(temp!=NULL) {
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<endl;
	}

	/* 10->20->30->40->50
	 * prev -> NULL
	 * curr->10
	 */
	void reverse()
	{
		Node* prev = NULL;
		Node* curr = head;

		tail = curr;

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
	Linked_list ll;
	ll.head = new Node(10);
	ll.head->next = new Node(20);
	ll.head->next->next = new Node(30);
	ll.head->next->next->next = new Node(40);
	ll.head->next->next->next->next = ll.tail = new Node(50);

	ll.printll();

	ll.reverse();
	ll.printll();
	return 0;
}

