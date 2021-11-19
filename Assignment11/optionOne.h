// optionOne.h
// Team: Anthony, An, Van, Vincent, Nhan

#ifndef OPTION_ONE_LOCK
#define OPTION_ONE_LOCK

#include <iostream>
#include <string>
#include "minHeap.h"
#include "maxHeap.h"
#include "input.h"

// Precondition: NA
// Postcondition: get size of minheap
void getSize(MinHeap<int> heap)
{
	cout << "\n\t\tSize of the heap: " << heap.getSize() << endl;
}

// Precondition: NA
// Postcondition: get size of maxHeap
void getSize(MaxHeap<int> heap)
{
	cout << "\n\t\tSize of the heap: " << heap.getSize() << endl;
}

// Precondition: NA
// Postcondition: check if minHeap is empty
void isEmpty(MinHeap<int> heap)
{
	if (heap.isEmpty())
		cout << "\n\t\tThe heap is empty." << endl;
	else
		cout << "\n\t\tThe heap is not empty." << endl;
}

// Precondition: NA
// Postcondition: check if maxHeap is empty
void isEmpty(MaxHeap<int> heap)
{
	if (heap.isEmpty())
		cout << "\n\t\tThe heap is empty." << endl;
	else
		cout << "\n\t\tThe heap is not empty." << endl;
}

// Precondition: NA
// Postcondition: push element onto the minHeap
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

// Precondition: NA
// Postcondition: push element onto the maxHeap
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

// Precondition: NA
// Postcondition: display the first element of minHeap
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

// Precondition: NA
// Postcondition: display the first element of maxHeap
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

// Precondition: NA
// Postcondition: pop the element in minHeap
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

// Precondition: NA
// Postcondition: pop the element in maxHeap
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

// Precondition: NA
// Postcondition: display the content in minHeap
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

// Precondition: NA
// Postcondition: display the content in maxHeap
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
