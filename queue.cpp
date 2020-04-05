#include "queue.h"
#include <iostream>
using namespace std;
template <class T>
Queue<T>::Queue(int size)
{
	if (size > 0)
	{
		/* code */
		this->size = size;
	}
	else
	{
		this->size = 10;
	}

	this->rear = -1;
	this->front = 0;

	this->data = new T[size];
}

template <class T>
Queue<T>::~Queue()
{
	delete[] data;
}

template <class T>
bool Queue<T>::isFull()
{
	if ((rear+1-front) >= size)
		return true;
	return false;
}

template <class T>
bool Queue<T>::isEmpty()
{
	if (rear == -1)
		return true;
	return false;
}

template <class T>
bool Queue<T>::peek(T &item)
{
	if (isEmpty())
		return false;
	item = data[front];
	return true;
}

template <class T>
bool Queue<T>::enQueue(const T item)
{
	if (isFull())
		return false;
	rear++;
	data[rear] = item;
	return true;
}

template <class T>
bool Queue<T>::deQueue(T &item)
{
	if (isEmpty())
		return false;
	front++;
	item = data[front];
	return true;
}

template <class T>
void Queue<T>::show()
{
	if (isEmpty())
	{
		cout << endl<< "This queue is empty";
		return;
	}
	cout << endl<< "This queue have this item: ";
	for (int i = front; i < rear+1; i++)
	{
		cout << data[i] << " ";
	}
}
int main()
{
	Queue<int> queue(20);
	queue.enQueue(1);
	queue.enQueue(2);
	queue.enQueue(3);
	queue.enQueue(4);
	queue.enQueue(5);

	int deQueue = queue.deQueue(deQueue);
	queue.enQueue(5);
	queue.deQueue(deQueue);
	queue.enQueue(6);
	queue.deQueue(deQueue);
	queue.enQueue(7);
	queue.deQueue(deQueue);
	queue.enQueue(8);
	queue.deQueue(deQueue);
	queue.deQueue(deQueue);
	queue.enQueue(9);
	queue.enQueue(10);
	queue.enQueue(10);
	queue.deQueue(deQueue);
	queue.deQueue(deQueue);
	queue.enQueue(10);
	queue.enQueue(10);
	queue.enQueue(10);

	queue.show();
	return 0;
}