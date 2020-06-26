#include "stddef.h"
template <class T>
class Stack
{
private:
	/* data */
	int top;
	int capacity;
	T *data;
public:
	Stack(int =10);
	~Stack();
	bool isFull();
	bool isEmpty();
	void push(const T);
	void pop();
	int size();
};
