#include <iostream>
#define CAPACITY 5

using namespace std;

class Cir_Queue {
private:
	int front, rear;
	int arr[CAPACITY];
	int CurrSize;
	
public:
	Cir_Queue() {
		front = rear = -1;
		CurrSize = 0;
	}

	void enqueue(int val) {
		if(CurrSize == CAPACITY) {
			cout<<"Cir_Queue is Full"<<endl;
			return;
		}

		if(front == -1)
			front = 0;

		rear = (rear + 1) % CAPACITY;
		arr[rear] = val;

		CurrSize++;
	}

	int dequeue()
	{
		if(CurrSize == 0) {
			rear = front = -1;
			cout<<"Queue is Empty"<<endl;
			return -1;
		}

		int val = arr[front];

		CurrSize--;
		//If only one element left
		if(CurrSize == 0) {
			front = rear = -1;
		} else {
			front = (front + 1) % CAPACITY;
		}

		return val;
	}

	int front_ele()
	{
		if(isEmpty()) {
			cout<<"Queue is Empty"<<endl;
			return -1;
		}
		return arr[front];
	}

	bool isEmpty()
	{
		return CurrSize == 0;
	}

};

int main()
{
	Cir_Queue q;

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);

	while(!q.isEmpty()) {
		cout<<q.front_ele()<<" ";
		q.dequeue();
	}

	cout<<endl;

	return 0;
}
