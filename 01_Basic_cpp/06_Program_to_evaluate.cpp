#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    srand(1);
    for(int i =0; i < 5; i++)
    {
        cout << endl << "Random numbers are : " << (rand() % 6) + 1;
    }
    
    return 0;
}