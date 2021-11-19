// optionOne.h
// Team: Anthony, An, Van, Vincent, Nhan

#ifndef OPTION_ONE_LOCK
#define OPTION_ONE_LOCK

#include <iostream>
#include <string>
#include "minHeap.h"
#include "maxHeap.h"
#include "input.h"

void getSize(MinHeap<int> heap)
{
	cout << "\n\t\tSize of the heap: " << heap.getSize() << endl;
}


void getSize(MaxHeap<int> heap)
{
	cout << "\n\t\tSize of the heap: " << heap.getSize() << endl;
}

void isEmpty(MinHeap<int> heap)
{
	if (heap.isEmpty())
		cout << "\n\t\tThe heap is empty." << endl;
	else
		cout << "\n\t\tThe heap is not empty." << endl;
}

void isEmpty(MaxHeap<int> heap)
{
	if (heap.isEmpty())
		cout << "\n\t\tThe heap is empty." << endl;
	else
		cout << "\n\t\tThe heap is not empty." << endl;
}

void push(MinHeap<int>& heap)
{
	try
	{
		int element = inputInteger("\n\t\tEnter an integer element to push onto the heap: ");
		heap.push(element);
	}
	catch (const invalid_argument& e)
	{
		cout << "\n\t\t" << e.what() << endl;
	}
}

void push(MaxHeap<int>& heap)
{
	try
	{
		int element = inputInteger("\n\t\tEnter an integer element to push onto the heap: ");
		heap.push(element);
	}
	catch (const invalid_argument& e)
	{
		cout << "\n\t\t" << e.what() << endl;
	}
}

void getFront(MinHeap<int> heap)
{
	try
	{
		cout << "\n\t\tThe first element of the heap: " << heap.getFront() << endl;
	}
	catch (const invalid_argument& e)
	{
		cout << "\n\t\t" << e.what() << endl;
	}
}


void getFront(MaxHeap<int> heap)
{
	try
	{
		cout << "\n\t\tThe first element of the heap: " << heap.getFront() << endl;
	}
	catch (const invalid_argument& e)
	{
		cout << "\n\t\t" << e.what() << endl;
	}
}

void pop(MinHeap<int>& heap)
{
	try
	{
		heap.pop();
		cout << "\n\t\tThe first element of the heap has been removed." << endl;
	}
	catch (const invalid_argument& e)
	{
		cout << "\n\t\t" << e.what() << endl;
	}
}


void pop(MaxHeap<int>& heap)
{
	try
	{
		heap.pop();
		cout << "\n\t\tThe first element of the heap has been removed." << endl;
	}
	catch (const invalid_argument& e)
	{
		cout << "\n\t\t" << e.what() << endl;
	}
}


void display(MinHeap<int> heap)
{
	try
	{
		cout << "\n\t\t";
		heap.display();
	}
	catch (const invalid_argument& e)
	{
		cout << "\n\t\t" << e.what() << endl;
	}
}

void display(MaxHeap<int> heap)
{
	try
	{
		cout << "\n\t\t";
		heap.display();
	}
	catch (const invalid_argument& e)
	{
		cout << "\n\t\t" << e.what() << endl;
	}
}
#endif