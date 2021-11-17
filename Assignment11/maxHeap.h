// maxHeap.h

#ifndef MAXHEAP_LOCK
#define MAXHEAP_LOCK

#include <iostream>
#include <vector>

template<class T>
class MaxHeap
{
private:
	int size;
public:
	vector<T> heapContainer;

	MaxHeap()
	{
		size = 0;
	}

	MaxHeap(const T& _data)
	{
		heapContainer.push_back(_data);
		size = 1;
	}

	~MaxHeap()
	{
		heapContainer.clear();
	}

	int parentIndex(int thisIndex)
	{
		return (thisIndex - 1) / 2;
	}

	int leftChildIndex(int thisIndex)
	{
		return 2 * thisIndex + 1;
	}

	int rightChildIndex(int thisIndex)
	{
		return 2 * thisIndex + 2;
	}

	void push(const T& _data)
	{
		if (containes(_data)) throw invalid_argument("ERROR: the element," + to_string(_data) + ", already existed in the heap. Please re-specify.");

		heapContainer.push_back(_data);
		size++;

		for (int i = size - 1; i >= 0; i--)
		{
			if (heapContainer[i] > heapContainer[parentIndex(i)])
			{
				T temp = heapContainer[i];
				heapContainer[i] = heapContainer[parentIndex(i)];
				heapContainer[parentIndex(i)] = temp;
			}
		}
	}

	void pop(void)
	{
		if (isEmpty()) throw invalid_argument("ERROR: the heap is empty");

		heapContainer[0] = heapContainer[size - 1];
		heapContainer.pop_back();
		size--;

		for (int i = 0; i < size; i++)
		{
			int leftChild = leftChildIndex(i);
			int rightChild = rightChildIndex(i);
			if (leftChild > size - 1 || rightChild > size - 1) continue;
			if (heapContainer[i] < heapContainer[leftChild] && heapContainer[leftChild] > heapContainer[rightChild])
			{
				T temp = heapContainer[i];
				heapContainer[i] = heapContainer[leftChild];
				heapContainer[leftChild] = temp;
			}
			else if (heapContainer[i] < heapContainer[rightChild] && heapContainer[rightChild] > heapContainer[leftChild])
			{
				T temp = heapContainer[i];
				heapContainer[i] = heapContainer[rightChild];
				heapContainer[rightChild] = temp;
			}
		}
	}

	void display(void)
	{
		if (isEmpty()) throw invalid_argument("ERROR: the heap is empty");
		std::cout << "\t\t";
		for (int i = 0; i < size; i++)
		{
			std::cout << heapContainer[i] << " ";
		}
		std::cout << std::endl;
	}

	int getSize() const
	{
		return size;
	}

	bool isEmpty()
	{
		if (size == 0) return true;
		return false;
	}

	bool containes(const T& _data)
	{
		for (int i = 0; i < size; i++)
		{
			if (_data == heapContainer[i]) return true;
		}
		return false;
	}

	T getFront()
	{
		if (isEmpty()) throw invalid_argument("ERROR: the heap is empty");
		return heapContainer[0];
	}
};

#endif