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

		void remove_cycle()
		{
			Node *slow, *fast;
			slow = fast = head;

			bool has_cycle = false;

			while(fast != NULL && fast->next != NULL) {
				slow = slow->next;
				fast = fast->next->next;

				if(slow == fast) {
					has_cycle = true;
					break;
				}
			}

			if(!has_cycle) {
				cout<<"No cycle found in this LL"<<endl;
			} else {
				slow = head;
				Node* prev;
				while(slow != fast) {
					slow = slow->next;
					prev = fast;
					fast = fast->next;
				}		

				cout<<"Cycle starts at "<<prev->data<<endl;

				cout<<"Breaking the cycle now"<<endl;

				prev->next = NULL;
			}
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
	ll.tail->next = ll.head->next->next;

	ll.remove_cycle();
	ll.remove_cycle();
}
