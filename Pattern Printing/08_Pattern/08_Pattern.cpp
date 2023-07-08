// Print this pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

void pattern(int n)
{
    int i = 0, j = 0, count = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << count++ << " ";
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