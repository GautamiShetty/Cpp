// The sizeof operator can be used to determine the number of bytes occupied
// in memory by a variable of a certain type. For example, sizeof(short) is
// equivalent to 2.
// Write a C++ program that displays the memory space required by each
// fundamental type on screen.

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of int    : " << sizeof(int) <<endl ;
    cout << "Size of char   : " << sizeof(char) <<endl ;
    cout << "Size of float  : " << sizeof(float) <<endl ;
    cout << "Size of double : " << sizeof(double) <<endl ;
    return 0;
}