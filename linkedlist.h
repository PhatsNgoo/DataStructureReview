#include "stddef.h"
template <class T>

class LinkedList
{
	struct LinkedListNode
	{
		T value;
		struct LinkedListNode *next;
	};

private:
	/* data */
	LinkedListNode *head;

public:
	LinkedList()
	{
		head = NULL;
	};
	bool isEmpty();
	int length();
	void insertFirst(T item);
	void deleteFirst();
	void insert(int position, T Item);
	void Delete(int position);
	int indexOf(T item);
	int operator[](int);
	void show();
};
