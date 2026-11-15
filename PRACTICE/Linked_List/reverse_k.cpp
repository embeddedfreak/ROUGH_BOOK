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
Node* reverse_k(Node* head, int k) {

	Node *temp = head;
	for(int i = 0; i < k; i++) {
		if(temp == NULL) {
			return head;
		}
		temp = temp->next;
	}

	//Recursive call
	Node* newhead = reverse_k(temp, k);

	temp = head;
	Node* next;

	for(int i = 0; i < k; i++) {
		next = temp->next;
		temp->next = newhead;
		newhead = temp;
		temp = next;
	}

	return newhead;		
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

	int k = 3;

	Node* newhead = reverse_k(ll.head, k);
	printll(newhead);
	return 0;
}
