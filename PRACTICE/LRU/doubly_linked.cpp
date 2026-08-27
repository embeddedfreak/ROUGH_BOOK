/* 
 * 🔹 Basic DLL operations — your practice set
 * Start with these, roughly in this order:
 * 1. print()
 * Print the list from head → tail.
 * 
 * 2. print_reverse()
 * Print the list from tail → head.
 * Good practice for understanding prev.
 * 
 * 3. push_front(x)
 * Insert a node at the beginning.
 * 
 * 4. push_back(x)
 * Insert a node at the end.
 * 
 * 5. pop_front()
 * Delete the first node.
 * 
 * 6. pop_back()
 * Delete the last node.
 * 
 * 7. insert_at(index, x)
 * Insert a node at a particular position.
 * 
 * 8. delete_at(index)
 * Delete a node at a particular position.
 * 
 * 9. insert_after(value, x)
 * Find a node containing value and insert after it.
 * 
 * 10. insert_before(value, x)
 * Find a node containing value and insert before it.
 * 
 * 11. delete_value(x)
 * Delete the first node containing x.
 * 
 * 12. search(x)
 * Return whether x exists in the list.
 * 
 * 13. size()
 * Return the number of nodes.
 * 
 * 14. reverse()
 * Reverse the entire DLL by manipulating prev and next.
 */

#include <iostream>

using namespace std;

class Node {
	public:
		int data;
		Node* next;
		Node* prev;

		Node(int val) {
			data = val;
			next = prev = NULL;
		}
};

class Doubly_Linked {
	public:
		Node* head;
		Node* tail; 

		Doubly_Linked() {
			head = tail = NULL;
		}

		//Push front
		void push_front(int val)
		{
			Node* newNode = new Node(val);

			if(head == NULL) {
				head = tail = newNode;	
			} else {
				newNode->next = head;
				head->prev = newNode;
				head = newNode;
			}
		}

		void push_back(int val)
		{
			Node* newNode = new Node(val);

			if(head == NULL) {
				head = tail = newNode;
			} else {
				tail->next = newNode;
				newNode->prev = tail;
				tail = newNode;
			}

		}	

		void pop_front()
		{
			if(head == NULL) {
				cout<<"pop_front: Doubly LL is empty"<<endl;
			} else {
				Node* temp = head;
				head = head->next;

				if(head != NULL) {
					head->prev = NULL;
				} else {
					tail = NULL;
				}

				temp->next = NULL;

				delete temp;
			}
		}

		void pop_back()
		{
			if(head == NULL) {
				cout<<"pop_back: Doubly LL is empty"<<endl;
			} else {
				Node* temp = tail;
				tail = tail->prev;

				if(tail != NULL) {
					tail->next = NULL;
				} else {
					head = NULL;
				}

				temp->prev = NULL;

				delete temp;
			}
		}

		void insert_at(int idx, int val)
		{
			// Find size
			int size = 0;
			Node* temp = head;

			while(temp != NULL) {
				size++;
				temp = temp->next;
			}

			// Invalid index
			if(idx < 0 || idx > size) {
				cout << "insert_at: invalid index" << endl;
				return;
			}

			// Insert at front
			if(idx == 0) {
				push_front(val);
				return;
			}

			// Insert at back
			if(idx == size) {
				push_back(val);
				return;
			}

			// Insert in the middle
			temp = head;

			for(int i = 0; i < idx - 1; i++) {
				temp = temp->next;
			}

			Node* newNode = new Node(val);

			Node* nextNode = temp->next;

			newNode->prev = temp;
			newNode->next = nextNode;

			temp->next = newNode;
			nextNode->prev = newNode;
		}
		//print Linked List
		void print_ll()
		{
			Node* temp = head;
			while(temp!=NULL) {
				cout<<temp->data<<"<->";
				temp = temp->next;
			}
			cout<<endl;
		}

		//print reverse
		void print_reverse()
		{
			Node* temp = tail;

			while(temp!=NULL) {
				cout<<temp->data<<"<->";
				temp = temp->prev;
			}
			cout<<endl;
		}
};

int main()
{
	Doubly_Linked dll;
	dll.push_front(30);
	dll.push_front(20);
	dll.push_front(10);

	dll.push_back(40);
	dll.push_back(50);


	dll.pop_front();
	dll.pop_back();

	dll.print_ll();
	dll.print_reverse();

	int idx = 2;
	dll.insert_at(idx, 60);
	return 0;
}
