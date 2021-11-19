// main.cpp
// Team: Anthony, An, Van, Vincent, Nhan
// Chapter 11: 
// 11/18/2021

#include <iostream>
#include <ctime>
#include <string>
#include "optionOne.h"
#include "optionTwo.h"
#include "optionThree.h"
#include "input.h"
#include "menus.h"
#include "minHeap.h"
#include "maxHeap.h"

void mainMenu(void);
void programOne(void);
void programTwo(void);
void programThree(void);

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
        case 0: return;
        case 1: programOne(); break;
        case 2: programTwo(); break;
        case 3: programThree(); break;
        default: cout << "\t\tERROR-3A: Invalid input. Must be from 0..3." << endl;
        }

    } while (true);
}

//PreCondition: NA
//PostCondition: runs program one
void programOne(void)
{
    do
    {
        clearScreen();
        displayOptionOneMenu();      
        
        int option = inputChar("\t\tOption: ");

        switch (option)
        {
        case '0': return;
        case 'a': case 'A': min_heap(); break;
        case 'b': case 'B': max_heap(); break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A', or 'B'." << endl;
            pause("\n\t\tPress enter to continue...");   
        }
    } while (true);
}

//PreCondition: NA
//PostCondition: runs program two
void programTwo(void)
{
    do
    {
        clearScreen();
        displayOptionTwoMenu();
        int option = inputChar("\t\tOption: ");
        vector<int>data1 = { 12,5,6,2 };
        vector<int>data2 = { 12,9,6 };
        MaxHeap<int>maxHeap1(data1);
        MaxHeap<int>maxHeap2(data2);
        MinHeap<int>minHeap1(data1);
        MinHeap<int>minHeap2(data2);

        switch (option)
        {
        case '0': return;
        case 'a': case 'A': mergedTwoMaxHeap(maxHeap1, maxHeap2); break;
        case 'b': case 'B': IntersectTwoMaxHeaps(maxHeap1, maxHeap2); break;
        case 'c': case 'C': mergedTwoMinHeap(minHeap1, minHeap2); break;
        case 'd': case 'D': IntersectTwoMinHeaps(minHeap1, minHeap2); break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B','C', or 'D'." << endl;
        }
        cout << endl;
        pause("\n\t\tPress enter to continue...");
    } while (true);
}

//PreCondition: NA
//PostCondition: runs program based on user input
void programThree(void)
{

    vector<int> data;
    int newSize, newElement;
    do
    {
        clearScreen();
        displayOptionThreeMenu();

        int option = inputChar("\t\tOption: ");

        switch (option)
        {
        case '0': return; break;
        case 'A': initArray(data); break;
        case 'B': pushValue(data); break;
        case 'C': makeHeap(data); break;
        case 'D': getFront(data); break;
        case 'E': pushHeap(data); break;
        case 'F': popHeap(data); break;
        case 'H': isHeap(data); break;
        case 'G': sortHeap(data); break;
        case 'I': isHeapUntil(data); break;          
        case 'J': display(data); break;
        default:
            cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B','C','D','E','F','G','H','I' or 'J'." << endl;
        }
        cout << endl;
        pause("\n\t\tPress enter to continue...");

    } while (true);
}
