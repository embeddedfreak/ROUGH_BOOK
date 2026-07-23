#include <iostream>

using namespace std;
class Node {
	public:
		int data;
		Node* next;
		Node* prev;

		Node(int val) {
			data = val;
			next = NULL;
			prev = NULL;
		}
};

class Double_LL {
	public:
		Node* head;
		Node* tail;

		Double_LL() {
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
			head->prev = newNode;
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
			newNode->prev = tail;
			tail = newNode;
		}

		void insert_at_pos(int pos, int val)
		{

			int size = 0;
			Node* temp = head;
			while(temp!=NULL) {
				size++;
				temp = temp->next;
			}

			//Invalid Positions
			if(pos < 1 || pos > size+1) {
				cout<<"Invalid Position"<<endl;
				return;
			}

			if(pos == 1) {
				insert_begin(val);
				return;
			} else if(pos == size+1) {
				insert_end(val);
				return;
			} else {
				int idx = 1;
				temp = head;
				while(idx != pos-1) {
					temp = temp->next;
					idx++;
				}

				Node* newNode = new Node(val);
				newNode->next = temp->next;
				newNode->prev = temp;
				temp->next = newNode;
				newNode->next->prev = newNode;


			}
		}

		void delete_begin()
		{
			if(head == NULL) {
				cout<<"delete_begin: LL is empty"<<endl;
				return;
			}

			if(head == tail) {
				delete head;
				head = tail = NULL;
				return;
			}

			Node* temp = head;
			head = head->next;
			head->prev = NULL;
			delete temp;
		}

		void delete_end()
		{
			if(head == NULL) {
				cout<<"delete_end: LL is empty"<<endl;
				return;
			}

			if(head == tail) {
				delete head;
				head = tail = NULL;
				return;
			}

			Node* temp = tail;
			tail = tail->prev;
			tail->next = NULL;

			delete temp;

		}


		void printll()
		{

			if(head == NULL) {
				cout<<"insert_begin: LL is empty"<<endl;
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
	Double_LL d;

	d.insert_begin(30);
	d.insert_begin(20);
	d.insert_begin(10);
	d.insert_end(40);

	d.printll();
	d.insert_at_pos(2, 100);
	d.printll();
	//	d.delete_begin();

	//	d.printll();
	//	d.delete_end();
	//	d.printll();
	return 0;
}
