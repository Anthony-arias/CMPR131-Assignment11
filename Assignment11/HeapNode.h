// HeapNode.h

#ifndef HEAPNODE_LOCK
#define HEAPNODE_LOCK

template<class T>
class HeapNode
{
public:
	template<class T>
	friend class MinHeap;

	// Constructor
	HeapNode(const T& _data = T(), HeapNode* _leftNode = NULL, HeapNode* _rightNode = NULL)
		:data(_data), leftNode(_leftNode), rightNode(_rightNode)
	{}

//private:
	T data;
	HeapNode* leftNode;
	HeapNode* rightNode;
};

#endif