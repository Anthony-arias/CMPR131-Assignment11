// main.cpp

// Team: Anthony, An, Van, Vincent, Nhan
// Chapter 11: 
// 11/18/2021

#include <iostream>
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
//PostCondition: 
void programThree(void)
{
    do
    {
        clearScreen();
        displayOptionThreeMenu();

        int option = inputChar("\t\tOption: ");

        switch (option)
        {
        case '0': return;
        case 'a': case 'A': /*function here*/ break;
        case 'b': case 'B': /*function here*/ break;
        case 'c': case 'C': /*function here*/ break;
        case 'd': case 'D': /*function here*/ break;
        case 'e': case 'E': /*function here*/ break;
        case 'f': case 'F': /*function here*/ break;
        case 'g': case 'G': /*function here*/ break;
        case 'h': case 'H': /*function here*/ break;
        case 'i': case 'I': /*function here*/ break;
        case 'j': case 'J': /*function here*/  break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B','C','D','E','F','G','H','I' or 'J'" << endl;
            pause("\n\t\tPress enter to continue...");
        }
    } while (true);
}