#include <iostream>

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
	Node *head, *tail;
	Linked_List()
	{
		head = tail = NULL;
	}

	void push_front(int val)
	{
		Node* newNode = new Node(val);

		if(head == NULL) {
			head = tail = newNode;
		} else {
			newNode->next = head;
			head = newNode;	
		}
	}

	void push_back(int val) 
	{
		Node* newNode = new Node(val);

		if(head == NULL) {
			head = tail = newNode;
		} else {
			tail->next = newNode;
			tail = newNode;
		}
	}

	void pop_front()
	{
		if(head == NULL) {
			cout<<"Linked list is empty"<<endl;
			return;
		}

		Node* temp = head;
		if(head->next)
			head = head->next;
		else
			head = tail = NULL;
		delete(temp);
	}

	void pop_back()
	{
		if(head == NULL) {
			cout<<"Linked list is empty"<<endl;
			return;
		}

		if(head == tail) {
			delete(head);
			head = tail = NULL;
			return;
		}

		Node* temp = head;
		while(temp->next != tail) {
			temp = temp->next;
		}
		temp->next = NULL;
		delete(tail);
		tail = temp;
	}

	void printll()
	{
		if(head == NULL) {
			cout<<"LList is empty"<<endl;
			return;
		} 
		
		Node *temp = head;
		while(temp != NULL) {
			cout<<temp->data<<" ";
			temp = temp->next;
		}		
		cout<<endl;
	}

};

int main()
{
	Linked_List ll;
	ll.push_front(10);
	ll.push_front(20);
	ll.push_back(30);
	ll.push_back(40);
	ll.printll();

	ll.pop_front();
	ll.printll();

	ll.pop_back();
	ll.printll();
}
