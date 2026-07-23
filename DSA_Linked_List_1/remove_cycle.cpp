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


	void remove_cycle() {
		Node* slow = head;
		Node* fast = head;
		
		while(fast!=NULL && fast->next!=NULL) {
			slow = slow->next;
			fast = fast->next->next;

			if(slow == fast) {
				break;
			}
		}

		slow = head;

		Node* prev;

		while(slow != fast) {
			prev = fast;
			slow = slow->next;
			fast = fast->next;
		}
		cout<<"Cycle found at: "<<prev->data<<endl;

		prev->next = NULL;

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

	//creating cycle
	ll.head->next->next->next->next->next = ll.head->next->next;		

	ll.remove_cycle();

	ll.printll();

	return 0;
}
