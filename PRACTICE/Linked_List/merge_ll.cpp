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

Node* merge_ll(Node* head1, Node* head2) 
{
	//Base condition
	if(head1 == NULL || head2 == NULL) {
		return (head1)? head1 : head2;
	}
	
	if(head1->data <= head2->data) {
		head1->next = merge_ll(head1->next, head2);
		return head1;
	} else {
		head2->next = merge_ll(head1, head2->next);
		return head2;
	}
}

int main()
{
	Linked_list ll;
	ll.head = new Node(10);
	ll.head->next = new Node(30);
	ll.head->next->next = new Node(40);
	ll.head->next->next->next = ll.tail = new Node(60);

	printll(ll.head);

	Linked_list mm;
	mm.head = new Node(20);
	mm.head->next = new Node(30);
	mm.head->next->next = new Node(50);
	mm.head->next->next->next = mm.tail = new Node(70);

	printll(mm.head);

	Node* newhead = merge_ll(ll.head, mm.head);

	printll(newhead);

	return 0;
}

