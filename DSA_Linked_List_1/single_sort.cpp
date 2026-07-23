#include <iostream>
#include <algorithm>

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

void single_sort(Node* head) 
{
	Node* i = head;
	while(i != NULL)  {
		Node* j = i->next;

		while(j!=NULL) {
			if(i->data > j->data) {
				swap(i->data, j->data);
			}
			j= j->next;
		}
		i = i->next;
	}
}

int main() 
{
	Linked_List l1;
	l1.head = new Node(3);;
	l1.head->next = new Node(1);
	l1.head->next->next = new Node(5);
	l1.head->next->next->next = new Node(6);

	printll(l1.head);
	
	single_sort(l1.head);

	printll(l1.head);

	


	return 0;
}
