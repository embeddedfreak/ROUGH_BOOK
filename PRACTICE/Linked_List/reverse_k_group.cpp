#include<iostream>

using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int val) 
	{
		data = val;
		next = NULL;
	}
};

class Linked_List {
public:
	Node* head;
       	Node* tail;

	Linked_List()
	{
		head = tail = NULL;
	}	
};

void printll(Node* head)
{
	if(head == NULL) {
		cout<<"printll: Linked List is Empty"<<endl;
		return;
	}

	Node* temp = head;
	while(temp != NULL)  {
		cout<<temp->data<<"->";
		temp = temp->next;
	}

	cout<<endl;
}

Node* reverse_k(Node* head, int k) 
{
	//check if k nodes exists
	int cnt = 0;

	Node* temp = head;

	while(cnt < k) {
		if(temp == NULL)
			return head;
		temp = temp->next;
		cnt++;	
	}

	//Recursively call for remaining nodes reverse
	Node* nextPrev = reverse_k(temp, k);	

	//Actual reverse k nodes
	temp = head;

	cnt = 0;
	while(cnt < k) {
		Node* next = temp->next;
		temp->next = nextPrev;
		nextPrev = temp;
		temp = next;
		cnt++;
	}

	return nextPrev;
}

int main()
{
	Linked_List ll;
	ll.head = new Node(10);
	ll.head->next = new Node(20);
	ll.head->next->next = new Node(30);
	ll.head->next->next->next = new Node(40);
	ll.head->next->next->next->next = new Node(50);

	ll.tail = ll.head->next->next->next->next;

	printll(ll.head);

	int k = 3;

	Node* newhead = reverse_k(ll.head, k);	
	printll(newhead);
	
	return 0;
}
