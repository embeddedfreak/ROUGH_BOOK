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

class LinkedList {
public:
	Node *head, *tail;

	LinkedList() {
		head = tail = NULL;
	}

	void push_back(int val)
	{
		Node* newNode = new Node(val);
		if(head == NULL)  {
			head = tail = newNode;
			return;
		}

		tail->next = newNode;
		tail = newNode;
	}

	void printll()
	{
		if(head == NULL) {
			cout<<"Linked list is empty"<<endl;
			return;
		}

		Node* temp = head;
		while(temp!=NULL) {
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<endl;
	}

	int find_middle() 
	{
		if(head == NULL) {
                        cout<<"Linked list is empty"<<endl;
                        return -1;
                }

		if(head->next == NULL) {
			return head->data;
		}

		Node *slow, *fast;

		slow = fast = head;

		while(fast != NULL && fast->next!=NULL) {
			slow = slow->next;
			fast = fast->next->next;
		}

		return slow->data;
	}
};

int main()
{
	LinkedList ll;
	ll.push_back(10);
	ll.push_back(20);
	ll.push_back(30);
	ll.push_back(40);
	ll.push_back(50);
	
	ll.printll();
	cout<<"Middle element is: "<<ll.find_middle()<<endl;
		
	return 0;
}

