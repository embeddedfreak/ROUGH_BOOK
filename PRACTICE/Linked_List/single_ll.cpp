#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int val) {
		data = val;
	}

};

class Linked_list {
public:
	Node* head;
	Node* tail;

	Linked_list() {
		head = tail = NULL;
	}

	void push_front(int val)
	{
		Node* newNode = new Node(val);

		if(head == NULL) {
			head = tail = newNode;
			return;
		}

		newNode->next = head;
		head = newNode;
	}

	void push_back(int val)
	{
		Node* newNode = new Node(val);

		if(head == NULL) {
			head = tail = NULL; 
		}

		tail->next = newNode;
		tail = tail->next;
	}

	void insert_pos(int val, int pos)
	{
		if(pos < 1) {
			cout<<"Invalid position"<<endl;
			return;
		}

		if(pos == 1) {
			push_front(val);
			return;
		}

		Node* temp = head;
		int count = 1;
		while(temp!=NULL && count!=pos-1) {
			temp = temp->next;
			count++;
		}
	
		if(temp == NULL) {
			cout<<"Position is out of range"<<endl;
			return;
		}	

		Node* newNode = new Node(val);

		newNode->next = temp->next;
		
		temp->next = newNode;
	}

	void insert_after_val(int val, int after)
	{
		Node* temp = head;

		while(temp!=NULL && temp->data!=after) {
			temp = temp->next;
		}

               if(temp == NULL) {
                        cout<<"Entered Value is not found"<<endl;
                        return;
                }

                Node* newNode = new Node(val);

                newNode->next = temp->next;

                temp->next = newNode;

	}

	void insert_before_val(int val, int before)
        {
		if(head == NULL) {
			cout<<"Linked List is Empty"<<endl;
			return;
		}

                Node* temp = head;

		if(temp->data == before) {
			push_front(val);
			return;
		}

                while(temp->next!=NULL && temp->next->data!=before) {
                        temp = temp->next;
                }

               if(temp->next == NULL) {
                        cout<<"Entered Value is not found"<<endl;
                        return;
                }

                Node* newNode = new Node(val);

                newNode->next = temp->next;

                temp->next = newNode;

        }

	void pop_front()
	{
		if(head == NULL) {
			cout<<"pop_front(): Linked LIst is Empty"<<endl;
			return;	
		}

		Node* temp = head;

		head = head->next;

		if(head == NULL) {
			tail = NULL;
		}
		temp->next = NULL;

		delete temp;
	}

	void pop_back()
	{
		if(head == NULL) {
			cout<<"pop_back(): Linked list is Empty"<<endl;
			return;
		}

		if(head == tail) {
			delete head;
			head = tail = NULL;
			return;
		}
	
		Node* temp = head;

		while(temp->next!=tail) {
			temp = temp->next;
		}

		temp->next = NULL;
		delete tail;
		tail = temp;

	}


	void print_ll()
	{
		if(head == NULL) {
			cout<<"Linked List is Empty"<<endl;
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
	Linked_list ll;
	ll.push_front(10);
	ll.push_front(20);
	ll.push_front(30);

	ll.push_back(40);
	ll.push_back(50);

	ll.insert_pos(100, 5);

	ll.insert_after_val(200, 20);
	ll.insert_before_val(150, 30);

	//150 30 20 200 10 40 100 50 

	ll.print_ll();
	ll.pop_front();

	ll.pop_back();

	ll.print_ll();

	return 0;
}
