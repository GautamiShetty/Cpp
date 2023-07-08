// Print this pattern 
// 1
// 2 3
// 3 4 5 
// 4 5 6 7

#include <iostream>
using namespace std;

void pattern(int n)
{
    int i = 0, j = 0;
    for (i= 1 ; i <= n ; i++) 
    {
        for(j = i; j <= i + (i - 1); j++)
        {
            cout << j << " ";
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