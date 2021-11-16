// optionThree.h
// Team: Anthony, An, Van, Vincent, Nhan
#ifndef OPTION_THREE_LOCK
#define OPTION_THREE_LOCK
#include <iostream>
#include <vector>
#include <ctime>
#include "input.h"

using namespace std;

void optionThree()
{
    srand(time(0));
    vector<int> array;
    int newSize, newElement;
    do
    {
        clearScreen();
        displayOptionThreeMenu();

        int option = inputChar("\t\tOption: ");

        switch (option)
        {
        case '0':
            break;
        case 'A': // create a dynamic array
        {
            if (array.size() > 0)
            {
                array.clear();
            }

            newSize = inputInteger("\n\t\tEnter the size of the dynamic array: ", 1);
            for (int i = 0; i < newSize; i++)
            {
                array.push_back((rand() % 100) + 1);
            }
            cout << "\n\t\tThe array is intialized with " << newSize << " random values.";
            break;
        }
        case 'B': // push_back() an element
        {
            if (array.size() > 0)
            {
                newElement = inputInteger("\n\t\tEnter an element: ");
                array.push_back(newElement);
                cout << "\n\t\t" << newElement << " has been push back into a dynamic array.";
            }
            else
            {
                cout << "\n\t\tError: Vector is empty.";
            }
            break;
        }
        case 'C': // make_heap()
        {

            if (array.size() > 0)
            {
                make_heap(array.begin(), array.end());
                cout << "\n\t\tVector has been converted into a heap.";
            }
            else
            {
                cout << "\n\t\tError: Vector is empty.";
            }
            break;
        }
        case 'D': // front
        {
            if (!is_heap(array.begin(), array.end()))
            {
                cout << "\n\t\tError: Vector is not a heap.";
            }
            else if (array.size() > 0)
            {
                cout << "\n\t\tThe front element of the heap is: " << array.front();
            }
            else
            {
                cout << "\n\t\tError: Vector is empty.";
            }
            break;

        }
        case 'E': // push_heap()
        {
            newElement = inputInteger("\n\t\tEnter the integer value (1...100) to push into the heap: ", 1, 100);
            array.push_back(newElement);
            push_heap(array.begin(), array.end());
            cout << "\n\t\t" << newElement << " has been pushed onto the heap.";
            break;

        }
        case 'F': // pop_heap()
        {
            if (!is_heap(array.begin(), array.end()))
            {
                cout << "\n\t\tError: Vector is not a heap.";
            }
            else if (array.size() > 0)
            {
                pop_heap(array.begin(), array.end());
                array.pop_back();
                cout << "\n\t\tA value was popped from the heap.";
            }
            else
            {
                cout << "\n\t\tError: Vector is empty.";
            }
            break;

        }
        case 'G': // sort_heap
        {
            if (!is_heap(array.begin(), array.end()))
            {
                cout << "\n\t\tError: Vector is not a heap.";
            }
            else if (array.size() > 0)
            {
                sort_heap(array.begin(), array.end());
                cout << "\n\t\tHeap has been sorted.";
            }
            else
            {
                cout << "\n\t\tError: Vector is empty.";
            }
            break;

        }
        case 'H': // is_heap
        {
            if (array.size() > 0)
            {
                is_heap(array.begin(), array.end()) ? cout << "\n\t\tThe vector is a heap." : cout << "\n\t\tThe vector is not a heap.";
            }
            else
            {
                cout << "\n\t\tError: Vector is empty.";
            }
            break;

        }
        case 'I': // is_heap_until()
            if (!is_heap(array.begin(), array.end()))
            {
                cout << "\n\t\tError: Vector is not a heap.";
            }
            else if (array.size() > 0)
            {
                auto it = is_heap_until(array.begin(), array.end());
                vector<int>::iterator it1;
                cout << "\n\t\tThe heap elements in container are: ";
                for (it1 = array.begin(); it1 != it; it1++)
                    cout << *it1 << " ";

            }
            else
            {
                cout << "\n\t\tError: Vector is empty.";
            }
            break;
        case 'J': // display()
            if (array.size() > 0 && !is_heap(array.begin(), array.end()))
            {
                cout << "\n\t\tNote: The vector has not been converted to a heap yet.";
                cout << "\n\t\t";
                for (int i = 0; i < array.size(); i++)
                {
                    cout << array[i] << " ";
                }
            }
            else if (array.size() > 0 && is_heap(array.begin(), array.end()))
            {
                cout << "\n\t\t";
                for (int i = 0; i < array.size(); i++)
                {
                    cout << array[i] << " ";
                }
            }
            else
            {
                cout << "\n\t\tError: Vector is empty.";
            }
            break;
        default:
            cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B','C','D','E','F','G','H','I' or 'J'" << endl;
        }
        cout << "\n";
        system("pause");

    } while (true);
}
#endif
