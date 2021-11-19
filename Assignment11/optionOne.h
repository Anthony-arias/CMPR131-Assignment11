// optionOne.h

#ifndef OPTION_ONE_LOCK
#define OPTION_ONE_LOCK

#include <iostream>
#include <ctime>
#include <string>
#include "input.h"
#include "minHeap.h"
#include "maxHeap.h"

void displayOptionOneSubAmenu();
void displayOptionOneSubBmenu();

//PreCondition: NA
//PostCondition: runs min heap program
void min_heap(MinHeap<int> minHeap)
{
    do
    {
        clearScreen();
        displayOptionOneSubAmenu();
        int option = inputChar("\t\tOption: ");

        switch (toupper(option))
        {
        case '0': return;
        case 'A':
            cout << "\n\t\tSize of the heap: " << minHeap.getSize() << endl; pause(""); break;
        case 'B':
            if (minHeap.isEmpty())
                cout << "\n\t\tThe heap is empty." << endl;
            else
                cout << "\n\t\tThe heap is not empty." << endl;
            pause("");
            break;
        case 'C':
            try
            {
                minHeap.push(inputInteger("\n\t\tEnter an integer element to push onto the heap: "));
            }
            catch (const invalid_argument& e)
            {
                cout << "\n\t\t" << e.what() << endl;
                pause("");
            }
            break;
        case 'D':
            try
            {
                cout << "\n\t\tThe first element of the heap: " << minHeap.getFront() << endl;
            }
            catch (const invalid_argument& e)
            {
                cout << "\n\t\t" << e.what() << endl;
            }
            pause("");
            break;
        case 'E':
            try
            {
                minHeap.pop();
                cout << "\n\t\tThe first element of the heap has been removed." << endl;
            }
            catch (const invalid_argument& e)
            {
                cout << "\n\t\t" << e.what() << endl;
            }
            pause("");
            break;
        case 'F':
            try
            {
                cout << "\n\t\t";
                minHeap.display();
            }
            catch (const invalid_argument& e)
            {
                cout << "\n\t\t" << e.what() << endl;
            }
            pause("");
            break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A', or 'B'." << endl;
            pause("");
        }
    } while (true);
}

//PreCondition: NA
//PostCondition: runs max heap program 
void max_heap(MaxHeap<int> maxHeap)
{
    do
    {
        clearScreen();
        displayOptionOneSubBmenu();
        int option = inputChar("\t\tOption: ");

        switch (toupper(option))
        {
        case '0': return;
        case 'A':
            cout << "\n\t\tSize of the heap: " << maxHeap.getSize() << endl;
            pause("");
            break;
        case 'B':
            if (maxHeap.isEmpty())
                cout << "\n\t\tThe heap is empty." << endl;
            else
                cout << "\n\t\tThe heap is not empty." << endl;
            pause("");
            break;
        case 'C':
            try
            {
                maxHeap.push(inputInteger("\n\t\tEnter an integer element to push onto the heap: "));
            }
            catch (const invalid_argument& e)
            {
                cout << "\n\t\t" << e.what() << endl;
                pause("");
            }
            break;
        case 'D':
            try
            {
                cout << "\n\t\tThe first element of the heap: " << maxHeap.getFront() << endl;
            }
            catch (const invalid_argument& e)
            {
                cout << "\n\t\t" << e.what() << endl;
            }
            pause("");
            break;
        case 'E':
            try
            {
                maxHeap.pop();
                cout << "\n\t\tThe first element of the heap has been removed." << endl;
            }
            catch (const invalid_argument& e)
            {
                cout << "\n\t\t" << e.what() << endl;
            }
            pause("");
            break;
        case 'F':
            try
            {
                cout << "\n\t\t";
                maxHeap.display();
            }
            catch (const invalid_argument& e)
            {
                cout << "\n\t\t" << e.what() << endl;
            }
            pause("");
            break;
        default:
            cout << "\t\tERROR-1A: Invalid input. Must be '0','A', or 'B'." << endl;
            pause("");
        }
    } while (true);
}

//PreCondition: NA
//PostCondition: displays option one sub program A menu options
void displayOptionOneSubAmenu()
{
    cout << "\n\tA> Min Heap" << endl;
    cout << "\t" + string(100, char(205)) << endl;
    cout << "\t\tA> size" << endl;
    cout << "\t\tB> empty" << endl;
    cout << "\t\tC> push" << endl;
    cout << "\t\tD> front" << endl;
    cout << "\t\tE> pop" << endl;
    cout << "\t\tF> display" << endl;
    cout << "\t" + string(100, char(196)) << endl;
    cout << "\t\t0> return" << endl;
    cout << "\t" + string(100, char(205)) << endl;
}

//PreCondition: NA
//PostCondition: displays option one sub program B menu options
void displayOptionOneSubBmenu()
{
    cout << "\n\tB> Max Heap" << endl;
    cout << "\t" + string(100, char(205)) << endl;
    cout << "\t\tA> size" << endl;
    cout << "\t\tB> empty" << endl;
    cout << "\t\tC> push" << endl;
    cout << "\t\tD> front" << endl;
    cout << "\t\tE> pop" << endl;
    cout << "\t\tF> display" << endl;
    cout << "\t" + string(100, char(196)) << endl;
    cout << "\t\t0> return" << endl;
    cout << "\t" + string(100, char(205)) << endl;
}
#endif
