// minHeap.h

// Implemented by: Anthony, An, Van, Vincent, Nhan

#ifndef MINHEAP_LOCK
#define MINHEAP_LOCK

#include <iostream>
#include <vector>
using namespace std;

template<class T>
class MinHeap
{
private:
	int size;
public:
	vector<T> heapContainer;

	MinHeap()
	{
		size = 0;
	}

	MinHeap(const T& _data)
	{
		heapContainer.push_back(_data);
		size = 1;
	}

	MinHeap(vector<T>data)
	{
		for (int i = 0; i < data.size(); i++)
			if (!containes(data[i]))
				push(data[i]);
		size = heapContainer.size();
	}

	~MinHeap()
	{
		heapContainer.clear();
	}

	//PreCondition: input is type int
	//PostCondition: returns index of parent key
	int parentIndex(int thisIndex) 
	{ 
		return (thisIndex - 1) / 2; 
	}

	//PreCondition: input is type int
	//PostCondition: returns index of left child key
	int leftChildIndex(int thisIndex) 
	{ 
		return 2 * thisIndex + 1; 
	}

	//PreCondition: input is type int
	//PostCondition: returns index of right child key
	int rightChildIndex(int thisIndex) 
	{ 
		return 2 * thisIndex + 2; 
	}

	//PreCondition: input is type T 
	//PostCondition: pushes data into heap container
	void push(const T& _data)
	{
		if (containes(_data)) throw invalid_argument("ERROR: the element, " + to_string(_data) + ", already existed in the heap. Please re-specify.");
		
		heapContainer.push_back(_data);
		size++;

		for (int i = size - 1; i >= 0; i--)
		{
			if (heapContainer[i] < heapContainer[parentIndex(i)])
			{
				T temp = heapContainer[i];
				heapContainer[i] = heapContainer[parentIndex(i)];
				heapContainer[parentIndex(i)] = temp;
			}
		}
	}

	//PreCondition: NA 
	//PostCondition: removes front key from heap container
	void pop(void)
	{
		if (isEmpty()) throw invalid_argument("ERROR: the heap is empty.");

		heapContainer[0] = heapContainer[size - 1];
		heapContainer.pop_back();
		size--;

		for (int i = 0; i < size; i++)
		{
			int leftChild = leftChildIndex(i);
			int rightChild = rightChildIndex(i);
			if (leftChild > size - 1 || rightChild > size - 1) continue;
			if (heapContainer[i] > heapContainer[leftChild] && heapContainer[leftChild] < heapContainer[rightChild])
			{
				T temp = heapContainer[i];
				heapContainer[i] = heapContainer[leftChild];
				heapContainer[leftChild] = temp;
			}
			else if (heapContainer[i] > heapContainer[rightChild] && heapContainer[rightChild] < heapContainer[leftChild])
			{
				T temp = heapContainer[i];
				heapContainer[i] = heapContainer[rightChild];
				heapContainer[rightChild] = temp;
			}
		}
	}

	//PreCondition: NA 
	//PostCondition: displays contents of heap container 
	void display(void)
	{
		if (isEmpty()) throw invalid_argument("ERROR: the heap is empty.");
		for (int i = 0; i < size; i++)
		{
			cout << heapContainer[i] << " ";
		}
		cout << endl;
	}

	//PreCondition: NA 
	//PostCondition: returns size of heap container
	int getSize(void) const
	{
		return size;
	}

	//PreCondition: NA 
	//PostCondition: returns true if size is 0 false if size is > 0
	bool isEmpty(void)
	{
		if (size == 0) return true;
		return false;
	}

	//PreCondition: input is type T 
	//PostCondition: returns true if data is found in heap false if data is not found in heap container
	bool containes(const T& _data)
	{
		for (int i = 0; i < size; i++)
		{
			if (_data == heapContainer[i]) return true;
		}
		return false;
	}

	//PreCondition: NA
	//PostCondition: returns front data in heap container
	T getFront(void)
	{
		if (isEmpty()) throw invalid_argument("ERROR: the heap is empty.");
		return heapContainer[0];
	}
};

#endif
