#include "stddef.h"
template <class T>
class Queue
{
private:
	/* data */
	int front;
	int rear;
	int size;
	T *data;
public:
	Queue(int =10);
	~Queue();
	bool isFull();
	bool isEmpty();
	bool peek(T&);
	bool enQueue(const T);
	bool deQueue(T&);
	void show();
};
