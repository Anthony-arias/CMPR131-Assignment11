// optionTwo.h
// Team: Anthony, An, Van, Vincent, Nhan
#ifndef OPTION_TWO_LOCK
#define OPTION_TWO_LOCK

#include <iostream>
#include "input.h"
#include "minHeap.h"
#include "maxHeap.h"

//PreCondition: input two maxHeap
//PostCondition: merged two maxHeap
void mergedTwoMaxHeap(MaxHeap<int>heap1, MaxHeap<int>heap2)
{
	cout << "\n\t\tMax heap 1: ";
	heap1.display();
	cout << "\n\t\tMax heap 2: ";
	heap2.display();
	MaxHeap<int> temp;
	for (int i = 0; i < heap2.getSize(); i++)
		if (!heap1.containes(heap2.heapContainer[i]))
			heap1.push(heap2.heapContainer[i]);
	cout << "\n\t\tMerged max heap: ";
	heap1.display();
}

//PreCondition: input two maxHeap
//PostCondition: intersect two maxHeap
void IntersectTwoMaxHeaps(MaxHeap<int>heap1, MaxHeap<int>heap2)
{
	cout << "\n\t\tMax heap 1: ";
	heap1.display();
	cout << "\n\t\tMax heap 2: ";
	heap2.display();
	MaxHeap<int> intersectHeap;
	for (int i = 0; i < heap2.getSize(); i++)
		if (heap1.containes(heap2.heapContainer[i]))
			intersectHeap.push(heap2.heapContainer[i]);
	cout << "\n\t\tIntersect heap: ";
	intersectHeap.display();
}

//PreCondition: input two minHeap
//PostCondition: merged two minHeap
void mergedTwoMinHeap(MinHeap<int>heap1, MinHeap<int>heap2)
{
	cout << "\n\t\tMin heap 1: ";
	heap1.display();
	cout << "\n\t\tMin heap 2: ";
	heap2.display();
	MinHeap<int> temp;
	for (int i = 0; i < heap2.getSize(); i++)
		if (!heap1.containes(heap2.heapContainer[i]))
			heap1.push(heap2.heapContainer[i]);
	cout << "\n\t\tMerged min heap: ";
	heap1.display();
}

//PreCondition: input two minHeap
//PostCondition: intersect two minHeap
void IntersectTwoMinHeaps(MinHeap<int>heap1, MinHeap<int>heap2)
{
	cout << "\n\t\tMin heap 1: ";
	heap1.display();
	cout << "\n\t\tMin heap 2: ";
	heap2.display();
	MinHeap<int> intersectHeap;
	for (int i = 0; i < heap2.getSize(); i++)
		if (heap1.containes(heap2.heapContainer[i]))
			intersectHeap.push(heap2.heapContainer[i]);
	cout << "\n\t\tIntersect heap: ";
	intersectHeap.display();
}
#endif
