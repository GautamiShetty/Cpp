#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int seed;

    cout << endl <<"To initialize the random number generator enter any integer : ";
    cin >> seed;

    srand(seed);

    cout << endl << "5 Random numbers are : ";

    for(int i = 0; i < 5; i++)
    {
        cout << rand() << " ";
    }

    cout << endl << "Random numbers in range from 1 to 6 : ";
    for(int i = 0; i < 5; i++)
    {
        cout << (rand() % 6) + 1 << " ";
    }
    return 0;
}