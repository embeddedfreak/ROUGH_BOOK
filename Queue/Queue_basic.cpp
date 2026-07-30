#include <iostream>
#define CAPACITY 5

using namespace std;

class Queue {
private:
	int rear;
	int front;
	int arr[CAPACITY];

public:

	Queue() {
		rear = front = -1;
	}

	void enqueue(int val)
	{
		if(rear == CAPACITY-1) {
			cout<<"Queue is full"<<endl;
			return;
		}

		if(front == -1) 
			front = 0;

		arr[++rear] = val;
	}

	int dequeue()
	{
		if(front == -1) {
			cout<<"Queue is Empty"<<endl;
			return -1;
		}
		int val = arr[front++];

		if(front > rear) {
			front = rear = -1;
		}

		return val;
	}

	bool isEmpty()
	{
		return front == -1;
	}

	int front_ele() 
	{
		return arr[front];
	}

};

int main()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);

	while(!q.isEmpty()) {
		cout<<q.front_ele()<<" ";
		q.dequeue();
	}

	return 0;
}
