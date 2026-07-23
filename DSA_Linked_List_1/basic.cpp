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


	void insert_begin(int val)
	{
		Node* newNode = new Node(val);

		if(head == NULL) {
			head = tail = newNode;
			return;
		}

		newNode->next = head;
		head = newNode;
	}


	void insert_end(int val)
	{
		Node* newNode = new Node(val);

		if(head == NULL) {
			head = tail = newNode;
			return;
		}

		tail->next = newNode;
		tail = newNode;
	}

	void delete_begin()
	{
		if(head == NULL) {
			cout<<"Delete Begin: LL is Empty"<<endl;
			return;
		}

		Node* temp = head;
		if(head->next)
			head = head->next;
		delete temp;
	}

	void delete_end()
	{
		if(head == NULL) {
                        cout<<"Delete Begin: LL is Empty"<<endl;
                        return;
                }

		if(head == tail) {
			delete head;
			head = tail = NULL;
			return;

		}

		Node* temp = head;

		while(temp->next != tail)  {
			temp = temp->next;
		}

	
		delete tail;	
		tail = temp;
		temp->next = NULL;

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
	ll.insert_begin(10);
	ll.insert_begin(20);
	ll.insert_begin(30);

	ll.insert_end(40);

	ll.printll();

	ll.delete_begin();

	ll.printll();

	ll.delete_end();
	
	ll.printll();

	return 0;
}
