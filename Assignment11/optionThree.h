// optionThree.h

#ifndef OPTION_THREE_LOCK
#define OPTION_THREE_LOCK
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include "input.h"

void initArray(vector<int>& data)
{
    srand(time(0));
    if (data.size() > 0)
    {
        data.clear();
    }

    int size = inputInteger("\n\t\tEnter the size of the dynamic array: ", 1);
    for (int i = 0; i < size; i++)
    {
        data.push_back((rand() % 100) + 1);
    }
    cout << "\n\t\tThe array is intialized with " << size << " random values." << endl;

}

void pushValue(vector<int>& data)
{
	int newElement = inputInteger("\n\t\tEnter an element: ");
	data.push_back(newElement);
    cout << "\n\t\t" << newElement << " has been push back into a dynamic array." << endl;
}


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


void getFront(vector<int>data)
{
    if (data.size() > 0)
    {
        cout << "\n\t\tThe first element of the vector is: " << data.front() << endl;
    }
    else
        cout << "\n\t\tError: Vector is empty." << endl;
}

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

void isHeapUntil(vector<int> data)
{
	if (data.size() > 0)
	{
		auto it = is_heap_until(data.begin(), data.end());
		vector<int>::iterator it1;
        cout << "\n\t\tThe heap elements in container are: " << endl;
		for (it1 = data.begin(); it1 != it; it1++)
			cout << *it1 << " ";
	}
	else
        cout << "\n\t\tError: Vector is empty." << endl;

}


void display(vector<int> data)
{
    if (data.size() > 0)
    {
        if (!is_heap(data.begin(), data.end()))
        {
            cout << "\n\t\tNote: The vector has not been converted to a heap yet." << endl;
            cout << "\n\t\t";
            for (int i = 0; i < data.size(); i++)
            {
                cout << data[i] << " ";
            }
        }
        else
        {
            cout << "\n\t\t";
            for (int i = 0; i < data.size(); i++)
            {
                cout << data[i] << " ";
            }
        }
    }
    else
        cout << "\n\t\tError: Vector is empty." << endl;

}
#endif