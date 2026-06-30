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
		Node* head, *tail;
		LinkedList()
		{
			head = tail = NULL;
		}

		bool has_cycle() {
			if(head == NULL || head->next == NULL) {
				return false;
			}

			Node *slow, *fast;
			slow = fast = head;

			while(fast!=NULL && fast->next!=NULL) {
				slow = slow->next;
				fast = fast->next->next;

				if(slow == fast) {
					return true;
				}
			}

			return false;
		}
};

int main() 
{
	LinkedList ll;
	ll.head = new Node(10);
	ll.head->next = new Node(20);
	ll.head->next->next = new Node(30);
	ll.head->next->next->next = new Node(40);
	ll.tail = ll.head->next->next->next->next = new Node(50);

	//50 to 30 cycle created
//	ll.tail->next = ll.head->next->next;

	if(ll.has_cycle()) {
		cout<<"The Linked list has cycle"<<endl; 
	} else {
		cout<<"The Linked list doesnt have cycle"<<endl; 
	}
}
