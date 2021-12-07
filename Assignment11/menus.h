// menus.h

// Implemented by: Anthony, An, Van, Vincent, Nhan

#include <iostream>
#include <string>

using namespace std;

//PreCondition: NA
//PostCondition: displays main menu options
void displayMainMenu(void)
{
    cout << "\n\tCMPR131 Chapter 11: Heaps by Anthony, An, Van, Vincent, Nhan (11/18/21)" << endl;
    cout << "\t" + string(100, char(205)) << endl;
    cout << "\t\t1> Heap using vector" << endl;
    cout << "\t\t2> Union and intersect of heaps" << endl;
    cout << "\t\t3> Heap in C++ STL" << endl;
    cout << "\t" + string(100, char(196)) << endl;
    cout << "\t\t0> exit" << endl;
    cout << "\t" + string(100, char(205)) << endl;
}

//PreCondition: NA
//PostCondition: displays option one menu options
void displayOptionOneMenu(void)
{
    cout << "\n\t1> Heap using vector" << endl;
    cout << "\t" + string(100, char(205)) << endl;
    cout << "\t\tA> Min heap" << endl;
    cout << "\t\tB> Max heap" << endl;   
    cout << "\t" + string(100, char(196)) << endl;
    cout << "\t\t0> return" << endl;
    cout << "\t" + string(100, char(205)) << endl;
}

//PreCondition: NA
//PostCondition: displays option two menu options
void displayOptionTwoMenu(void)
{
    cout << "\n\t2> Union and intersect heap" << endl;
    cout << "\t" + string(100, char(205)) << endl;
    cout << "\t\tA> Union two max Heaps" << endl;
    cout << "\t\tB> Intersect two max Heaps" << endl;
    cout << "\t\tC> Union two mmin Heaps" << endl;
    cout << "\t\tD> Intersect two min Heaps" << endl;
    cout << "\t" + string(100, char(196)) << endl;
    cout << "\t\t0> return" << endl;
    cout << "\t" + string(100, char(205)) << endl;
}

//PreCondition: NA
//PostCondition: displays option three menu options
void displayOptionThreeMenu(void)
{
    cout << "\n\t3> Heap in C++ STL" << endl;
    cout << "\t" + string(100, char(205)) << endl;
    cout << "\t\tA> create a dynamic array" << endl;
    cout << "\t\tB> push_back() an element" << endl;
    cout << "\t\tC> make_heap()" << endl;
    cout << "\t\tD> front()" << endl;
    cout << "\t\tE> push_heap()" << endl;
    cout << "\t\tF> pop_heap()" << endl;
    cout << "\t\tG> sort_heap()" << endl;
    cout << "\t\tH> is_heap()" << endl;
    cout << "\t\tI> is_heap_until()" << endl;
    cout << "\t\tJ> display" << endl;
    cout << "\t" + string(100, char(196)) << endl;
    cout << "\t\t0> return" << endl;
    cout << "\t" + string(100, char(205)) << endl;
}
