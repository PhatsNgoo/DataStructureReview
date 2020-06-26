#include "stack.h"
#include <iostream>
using namespace std;
template <class T>
Stack<T>::Stack(int size)
{
	if (size > 0)
	{
		this->capacity = size;
	}
	else
	{
		this->capacity=10;
	}
	this->top=-1;
	this->data=new T[capacity];
}

template <class T>
Stack<T>::~Stack()
{
	delete[] data;
}

template <class T>
int Stack<T>::size()
{
	return this->capacity;
}

template <class T>
bool Stack<T>::isEmpty()
{
	return this->top==-1;
}

template <class T>
bool Stack<T>::isFull()
{
	return this->top==this->capacity-1;
}

template <class T>
void Stack<T>::pop()
{
	if (this->top<0)
	{
		/* code */
		cout<<"Stack is empty cannot pop";
	}
	else
	{
		top--;
	}
}

template <class T>
void Stack<T>::push(T item)
{
	if (this->top<this->capacity)
	{
		/* code */
		top++;
		this->data[top]=item;
	}
	else
	{
		cout<<"Stack is full cannot push";
	}
}