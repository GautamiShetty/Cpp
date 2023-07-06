// Print below pattern 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include <iostream>
using namespace std;

void pattern(int n)
{
    int i = 0, j = 0;
    for (i= 1 ; i <= n ; ++i) 
    {
        for(j = 1; j <= n; j++)
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