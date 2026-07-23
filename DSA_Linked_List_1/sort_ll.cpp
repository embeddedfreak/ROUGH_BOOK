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
};


void printll(Node* head) 
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

Node* merge_ll(Node* head1, Node* head2) 
{
	//Base condition
	if(head1 == NULL || head2 == NULL)
		return (head1 == NULL) ? head2 : head1;

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
	Linked_List l1;
	l1.head = new Node(1);;
	l1.head->next = new Node(3);
	l1.head->next->next = new Node(5);
	l1.head->next->next->next = new Node(6);

	printll(l1.head);

	Linked_List l2;
	l2.head = new Node(2);;
	l2.head->next = new Node(3);
	l2.head->next->next = new Node(4);
	l2.head->next->next->next = new Node(7);

	printll(l2.head);

	Node* newhead = merge_ll(l1.head, l2.head);


	printll(newhead);

	return 0;
}
