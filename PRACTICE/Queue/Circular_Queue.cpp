#include <iostream>

#define CAPACITY 6

using namespace std;

class Queue {
public:
	int rear;
	int front;
	int capacity;
	int qsize;
	int *arr;

	Queue(int cap) {
		arr = new int[cap];
		capacity = cap;
		rear = -1;
		front = 0;
		qsize = 0;
	}
	
	void push(int data)
	{
		if(qsize == capacity) {
			return;
		}

		rear = (rear+1) % capacity;
		arr[rear] = data;
		qsize++;
	}

	void pop()
	{
		if(qsize == 0) {
			return;
		}

		front = (front+1) % capacity;
		qsize--;
	}

	int front_ele()
	{
		if(qsize == 0) {
			return -1;
		}
		return arr[front]; 
	}

	bool isEmpty()
	{
		return (qsize == 0);
	}

};

int main()
{
	Queue q(6);

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);

	while(!q.isEmpty()) {
		cout<<q.front_ele()<<" ";
		q.pop();
	}

	cout<<endl;



	return 0;
}

