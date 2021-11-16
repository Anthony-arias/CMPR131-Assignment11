// optionTwo.h

#ifndef OPTION_TWO_LOCK
#define OPTION_TWO_LOCK
#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

// To heapify a subtree rooted with node i which is
// an index in vector. N is size of heap
void maxHeapify(vector<int>& maxHeap, int n, int i)
{
    int largest = i; 
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // If left child is larger than root
    if (left < n && maxHeap[left] > maxHeap[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && maxHeap[right] > maxHeap[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(maxHeap[i], maxHeap[largest]);
        maxHeapify(maxHeap, n, largest);
    }
}

// Function to build a Max-Heap from the given vector
void buildMaxHeap(vector<int>& maxHeap, int n)
{
    // Index of last non-leaf node
    int startIdx = (n / 2) - 1;

    for (int i = startIdx; i >= 0; i--) 
    {
        maxHeapify(maxHeap, n, i);
    }
}

// A utility function to print the vector
// representation of Heap
void printHeap(vector<int> heap, int n)
{
    for (int i = 0; i < n; ++i)
        cout << heap[i] << " ";
    cout << "\n";
}

// Driver Code
void mergedMaxHeap()
{
    vector<int> maxHeap1 = { 2,5,6,12 };
    buildMaxHeap(maxHeap1, maxHeap1.size());
    cout << "\n\t\tMax heap1: ";
    printHeap(maxHeap1, maxHeap1.size());
    vector<int> maxHeap2 = { 6,9,12 };
    buildMaxHeap(maxHeap2, maxHeap2.size());
    cout << "\n\t\tMax heap2: ";
    printHeap(maxHeap2, maxHeap2.size());


}

#endif