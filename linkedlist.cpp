#include "linkedlist.h"
#include <iostream>
using namespace std;

template <class T>
bool LinkedList<T>::isEmpty()
{
	if (head == NULL)
	{
		return true;
	}
	return false;
}

template <class T>
void LinkedList<T>::insertFirst(T item)
{
	LinkedListNode *newNode = new LinkedListNode;
	newNode->value = item;
	newNode->next = head;
	head = newNode;
}

template <class T>
void LinkedList<T>::deleteFirst()
{
	head = head->next;
}

template <class T>
int LinkedList<T>::length()
{
	int count = 0;
	LinkedListNode *node = new LinkedListNode;
	node = head;
	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return count;
}

template <class T>
void LinkedList<T>::show()
{
	cout << "Item from this list: ";
	LinkedListNode *node = new LinkedListNode;
	node = head;
	while (node != NULL)
	{
		cout << node->value << ",";
		node = node->next;
	}
	cout << "\n";
}

template <class T>
void LinkedList<T>::Delete(int position)
{
	int size = length();
	if (position < 0 || position > size)
	{
		cout << "Invalid position";
	}
	else if (position == 0)
	{
		deleteFirst();
	}
	else
	{
		int count = 1;
		LinkedListNode *node = head->next;
		while (count != position - 1)
		{
			count++;
			node = node->next;
		}
		node->next = node->next->next;
	}
}

template <class T>
void LinkedList<T>::insert(int position, T item)
{
	int size = length();
	if (position < 0 || position > size)
	{
		cout << "Invalid position";
	}
	else if (position == 0)
	{
		insertFirst(item);
	}
	else
	{
		int count = 1;
		LinkedListNode *insertNode=new LinkedListNode;
		insertNode->value=item;
		LinkedListNode *node = head->next;
		while (count!=position-1)
		{
			count++;
			node=node->next;
		}
		// node->next=node->next->next;
		insertNode->next=node->next;
		node->next=insertNode;
	}
}

template <class T>
int LinkedList<T>::indexOf(T item){
	int counter=0;
	LinkedListNode *node=new LinkedListNode;
	node=head;
	while (node!=NULL)
	{
		/* code */
		if (node->value==item)
		{
			/* code */
			return counter;
		}
		node=node->next;
		counter++;
	}
	return -1;
}

template <class T>
int LinkedList<T>::operator[](int index){
	int counter=0;
	LinkedListNode *node=new LinkedListNode;
	LinkedListNode testNode;
	node=head;
	testNode.next=head;
	cout<<endl<<"gfhfghfgh:"<<testNode.next->value<<endl;
	while (counter<index)
	{
		/* code */
		counter++;
		node=node->next;
	}
	return node->value;
	
}

LinkedList<float> newList;
int main()
{

	newList.insertFirst(1.2);
	newList.insertFirst(2.3);
	newList.insertFirst(3.2);
	newList.insertFirst(4.5);
	newList.insertFirst(5.7);
	newList.insertFirst(6.9);
	newList.Delete(3);
	newList.insert(3,7);
	int index=newList.indexOf(4.5);
	cout<<index<<"\n";
	cout<<newList[2]<<"\n";
	newList.show();
	return 0;
}
