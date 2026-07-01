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

Node* merge_list(Node* head1, Node* head2)
{
	//Base condition
	
	if(head1 == NULL || head2 == NULL) {
		return (head1 == NULL) ? head2 : head1;
	}
	
	if(head1->data <= head2->data) {
		head1->next = merge_list(head1->next, head2); 
		return head1;
	} else {
		head2->next = merge_list(head1, head2->next);
		return head2;
	}
}

void printll(Node* head)
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

int main() {

	Node* head1 = new Node(1);
	head1->next = new Node(3);
	head1->next->next = new Node(5);

	Node* head2 = new Node(2);
	head2->next = new Node(3);
	head2->next->next = new Node(6);

	Node* head3 = merge_list(head1, head2);

	printll(head3);
	return 0;
}
