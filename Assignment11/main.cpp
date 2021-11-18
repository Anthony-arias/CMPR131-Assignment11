// main.cpp

// Team: Anthony, An, Van, Vincent, Nhan
// Chapter 11: 
// 11/18/2021

#include <iostream>
#include <ctime>
#include <string>
#include <ctime>
#include "optionOne.h"
#include "optionTwo.h"
#include "input.h"
#include "menus.h"
#include "minHeap.h"
#include "maxHeap.h"



void mainMenu(void);
void programOne(void);
void programTwo(void);
void programThree(void);
void programOneSubA(void);
void programOneSubB(void);

using namespace std;

int main(void)
{
    mainMenu();
    return 0;
}

//PreCondition: NA
//PostCondition: redirects user to different menus based on their choice
void mainMenu(void)
{
    do
    {
        clearScreen();

        displayMainMenu();

        int userInput = inputInteger("\t\tOption: ", 0, 3);
        switch (userInput)
        {
        case 0: clearScreen(); return;
        case 1: clearScreen(); programOne(); break;
        case 2: clearScreen(); programTwo(); break;
        case 3: clearScreen(); programThree(); break;
        default: cout << "\t\tERROR-3A: Invalid input. Must be from 0..3." << endl;
        }

    } while (true);
}

//PreCondition: NA
//PostCondition: runs program one
void programOne(void)
{
    cout << "\n\tVectors are sequence containers representing arrays that can change in size.\n";
    do
    {
        clearScreen();
        displayOptionOneMenu();
        int option = inputChar("\t\tOption: ");

        switch (option)
        {
        case '0': return;
        case 'a': case 'A': programOneSubA(); break;
        case 'b': case 'B': programOneSubB(); break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A', or 'B'" << endl;
            pause("\n\t\tPress enter to continue...");
        }
    } while (true);
}

//PreCondition: NA
//PostCondition: runs min heap program
void programOneSubA(void)
{
    MinHeap<int> minHeap;
    do
    {
        clearScreen();
        displayOptionOneSubAmenu();
        int option = inputChar("\t\tOption: ");

        switch (option)
        {
        case '0': return;
        case 'a': case 'A': cout << "\n\t\tSize of the heap: " << minHeap.getSize() << endl; pause(""); break;
        case 'b': case 'B': 
            if (minHeap.isEmpty()) cout << "\n\t\tThe heap is empty." << endl;
            else cout << "\n\t\tThe heap is not empty." << endl;
            pause("");
            break;
        case 'c': case 'C':
            try
            {
                minHeap.push(inputInteger("\n\t\tEnter an integer element to push onto the heap: "));
            }
            catch(const invalid_argument& e) { cout << "\n\t\t" << e.what() << endl; pause("");}
            break;
        case 'd': case 'D':
            try
            {
                cout << "\n\t\tThe first element of the heap: " << minHeap.getFront() << endl;
            }
            catch (const invalid_argument& e) { cout << "\n\t\t" << e.what() << endl; }
            pause("");
            break;
        case 'e': case 'E':
            try
            {
                minHeap.pop();
                cout << "\n\t\tThe first element of the heap has been removed." << endl;
            }
            catch (const invalid_argument& e) { cout << "\n\t\t" << e.what() << endl; }
            pause("");
            break;
        case 'f': case 'F':
            try
            {
                minHeap.display();
            }
            catch (const invalid_argument& e) { cout << "\n\t\t" << e.what() << endl; }
            pause("");
            break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A', or 'B'" << endl;
            pause("");
        }
    } while (true);
}

//PreCondition: NA
//PostCondition: runs max heap program 
void programOneSubB(void)
{
    MaxHeap<int> maxHeap;
    do
    {
        clearScreen();
        displayOptionOneSubBmenu();
        int option = inputChar("\t\tOption: ");

        switch (option)
        {
        case '0': return;
        case 'a': case 'A': cout << "\n\t\tSize of the heap: " << maxHeap.getSize() << endl; pause(""); break;
        case 'b': case 'B':
            if (maxHeap.isEmpty()) cout << "\n\t\tThe heap is empty." << endl;
            else cout << "\n\t\tThe heap is not empty." << endl;
            pause("");
            break;
        case 'c': case 'C':
            try
            {
                maxHeap.push(inputInteger("\n\t\tEnter an integer element to push onto the heap: "));
            }
            catch (const invalid_argument& e) { cout << "\n\t\t" << e.what() << endl; pause(""); }
            break;
        case 'd': case 'D':
            try
            {
                cout << "\n\t\tThe first element of the heap: " << maxHeap.getFront() << endl;
            }
            catch (const invalid_argument& e) { cout << "\n\t\t" << e.what() << endl; }
            pause("");
            break;
        case 'e': case 'E':
            try
            {
                maxHeap.pop();
                cout << "\n\t\tThe first element of the heap has been removed." << endl;
            }
            catch (const invalid_argument& e) { cout << "\n\t\t" << e.what() << endl; }
            pause("");
            break;
        case 'f': case 'F':
            try
            {
                maxHeap.display();
            }
            catch (const invalid_argument& e) { cout << "\n\t\t" << e.what() << endl; }
            pause("");
            break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A', or 'B'" << endl;
            pause("");
        }
    } while (true);
}

//PreCondition: NA
//PostCondition: 
void programTwo(void)
{
    do
    {
        clearScreen();
        displayOptionTwoMenu();
        int option = inputChar("\t\tOption: ");

        switch (option)
        {
        case '0': return;
        case 'a': case 'A': /*function here*/ break;
        case 'b': case 'B': /*function here*/ break;
        case 'c': case 'C': /*function here*/ break;
        case 'd': case 'D': /*function here*/ break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B','C', or 'D'" << endl;
            pause("\n\t\tPress enter to continue...");
        }
    } while (true);
}

//PreCondition: NA
//PostCondition: runs program based on user input
void programThree(void)
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
