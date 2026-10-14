#include<iostream>

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

class Linked_list {
	public:
		Node* head;
		Node* tail;

		Linked_list() {
			head = tail = NULL;
		}


		/* 10->20->30->40->50
		 * prev -> NULL
		 * curr->10
		 */
		void reverse()
		{
			Node* prev = NULL;
			Node* curr = head;

			tail = curr;

			while(curr!=NULL) {
				Node* next = curr->next;
				curr->next = prev;
				prev = curr;
				curr = next;
			}
			head = prev;
		}		
};

void printll(Node* head)
{
	if(head == NULL) {
		cout<<"Linked list is Empty"<<endl;
		return;
	}

	Node* temp = head;
	while(temp!=NULL) {
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

/* Remember problem happens with even nodes
 * it will return second half of mid elements
 * That is (20, 30) = 30
 * To prevent this, initialise the fast to head->next and try
 */
bool has_cycle(Node* head) {
	Node* slow = head;
	Node* fast = head;

	bool cycle = false;

	while(fast!=NULL && fast->next!=NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast) {
			cycle = true;
			break;
		}
	}
	return cycle;
}


int main()
{
	Linked_list ll;
	ll.head = new Node(10);
	ll.head->next = new Node(20);
	ll.head->next->next = new Node(30);
	ll.head->next->next->next = new Node(40);
	ll.head->next->next->next->next = new Node(50);
	ll.head->next->next->next->next->next = ll.head->next->next;
	//ll.head->next->next->next->next = ll.tail = new Node(50);


	if(has_cycle(ll.head)) {
		cout<<"Has cycle"<<endl;
	} else {
		cout<<"No cycle"<<endl;
	}

	return 0;
}

