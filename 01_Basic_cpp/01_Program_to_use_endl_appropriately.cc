// Write a C++ program that outputs the following text on screen:
// Oh what
// a happy day!
// Oh yes,
// what a happy day! 
// Use the manipulator endl where appropriate.

#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    clock_t timeReq = clock();
    cout << "Oh what" << endl << "a happy day !" << endl << "Oh yes," << endl << "what a happy day!";
    timeReq = clock() - timeReq;
    cout << endl << "Time required to execute this program : " << (float)timeReq/CLOCKS_PER_SEC << " seconds";  
    return 0;
}