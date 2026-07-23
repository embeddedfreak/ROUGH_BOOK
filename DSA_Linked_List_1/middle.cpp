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


	int middle_ll() {
		Node* slow = head;
		Node* fast = head;
		
		if(head == NULL) {
			cout<<"Linked List is Empty"<<endl;
			return -1;
		}	

		if(head->next == NULL) {
			return head->data;
		}

		//10 20 30
		//10 20 30 40
		while(fast!=NULL && fast->next != NULL) {
			slow = slow->next;
			fast = fast->next->next;
		}

		return slow->data;
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
	ll.tail = ll.head->next->next->next;
	
	ll.printll();

	cout<<"Middle node of Linked List is: "<<ll.middle_ll()<<endl;
	return 0;
}
