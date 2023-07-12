#include <iostream>
using namespace std;

void pattern(int n)
{
    int i = 0, j = 0;
    for (i = 0 ; i < n ; i++) 
    {
        for(j = 'A' + i; j <= ('A' + i) + n - 1; j++)
        {
            cout << char(j) << " ";
        }
        cout << endl;
    }

}

int main()
{
    int n = 0;
    cin >> n;
    pattern(n);
    return 0;
}