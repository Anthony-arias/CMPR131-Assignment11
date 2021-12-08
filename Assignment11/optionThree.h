// optionThree.h
// Team: Anthony, An, Van, Vincent, Nhan

// Implemented by: Anthony, An, Van, Vincent, Nhan

#ifndef OPTION_THREE_LOCK
#define OPTION_THREE_LOCK
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include "input.h"

// Precondition: NA
// Postcondition: Randomly generate number based on the input's size
void initArray(vector<int>& data)
{
    srand(time(0));
    if (data.size() > 0)
    {
        data.clear();
    }

    int size = inputInteger("\n\t\tEnter the size of the vector: ", 1);
    for (int i = 0; i < size; i++)
    {
        data.push_back((rand() % 100) + 1);
    }
    cout << "\n\t\tThe vector is initialized with " << size << " random values." << endl;

}

// Precondition: NA
// Postcondition: push back value into vector
void pushValue(vector<int>& data)
{
	int newElement = inputInteger("\n\t\tEnter an element: ");
	data.push_back(newElement);
    cout << "\n\t\t" << newElement << " has been push back into a vector." << endl;
}

// Precondition: NA
// Postcondition: convert the vector into a heap
void makeHeap(vector<int>& data)
{
    if (data.size() > 0)
    {
        make_heap(data.begin(), data.end());
        cout << "\n\t\tVector has been converted into a heap." << endl;
    }
    else
        cout << "\n\t\tError: Vector is empty." << endl;
}

// Precondition: NA
// Postcondition: display the first element of the vector
void getFront(vector<int>data)
{
    if (data.size() == 1)
        cout << "\n\t\tThe first element of the heap/vector is: " << data.front() << endl;
    else if (data.size() > 0 && is_heap(data.begin(), data.end()))
        cout << "\n\t\tThe first element of the heap is: " << data.front() << endl;
    else if (data.size() > 0 && !is_heap(data.begin(), data.end()))
        cout << "\n\t\tThe first element of the vector is: " << data.front() << endl;
    else
        cout << "\n\t\tError: Vector is empty." << endl;
}

// Precondition: NA
// Postcondition: push value into a heap
void pushHeap(vector<int>&data)
{
    if (data.size() > 0)
    {
        if (is_heap(data.begin(), data.end()))
        {
            int newElement = inputInteger("\n\t\tEnter an element: ");
            data.push_back(newElement);
            push_heap(data.begin(), data.end());
            cout << "\n\t\t" << newElement << " has been pushed onto the heap." << endl;
        }
        else
            cout << "\n\t\tError: Vector is not a heap." << endl;
    }
    else
    {
        int newElement = inputInteger("\n\t\tEnter an element: ");
        data.push_back(newElement);
        cout << "\n\t\t" << newElement << " has been pushed onto the heap." << endl;
    }
}

// Precondition: NA
// Postcondition: pop value from the heap
void popHeap(vector<int>& data)
{
    if (data.size() > 0)
    {
        if (is_heap(data.begin(), data.end()))
        {
            pop_heap(data.begin(), data.end());
            data.pop_back();
            cout << "\n\t\tA value was popped from the heap." << endl;
        }
        else
            cout << "\n\t\tError: Vector is not a heap." << endl;
    }
    else
        cout << "\n\t\tError: Vector is empty." << endl;
}

// Precondition: NA
// Postcondition: sort the heap
void sortHeap(vector<int>& data)
{
    if (!is_heap(data.begin(), data.end()))
    {
        cout << "\n\t\tError: Vector is not a heap.";
    }
    else if (data.size() > 0)
    {
        sort_heap(data.begin(), data.end());
        cout << "\n\t\tHeap has been sorted.";
    }
    else
    {
        cout << "\n\t\tError: Vector is empty.";
    }
}

// Precondition: NA
// Postcondition: check if the vector is a heap or not
void isHeap(vector<int> data)
{
    if (data.size() > 0)
    {
        if (is_heap(data.begin(), data.end()))
            cout << "\n\t\tThe vector is a heap." << endl;
        else
            cout << "\n\t\tThe vector is not a heap." << endl;
    }
    else
        cout << "\n\t\tError: Vector is empty." << endl;
}

// Precondition: NA
// Postcondition: display the heap elements in container
void isHeapUntil(vector<int> data)
{
	if (data.size() > 0)
	{
		auto it = is_heap_until(data.begin(), data.end());
		vector<int>::iterator it1;
        cout << "\n\t\tThe heap elements in container are: ";
		for (it1 = data.begin(); it1 != it; it1++)
			cout << *it1 << " ";
        cout << "\n";
	}
	else
        cout << "\n\t\tError: Vector is empty." << endl;

}

// Precondition: NA
// Postcondition: display the value in the vector
void display(vector<int>& data)
{
    if (data.size() > 0)
    {
        cout << "\n\t\t";
        for (int i = 0; i < data.size(); i++)
        {
            cout << data[i] << " ";
        }
    }
    else
        cout << "\n\t\tError: Vector is empty." << endl;

}
#endif
