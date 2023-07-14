#include <iostream>
using namespace std;

void pattern(int n)
{
    int i = 0, j = 0;
    char alpha = 'A';
    for (i= 1 ; i <= n ; i++) 
    {
        for(j = 1; j <= i; j++)
        {
            if(alpha == 'Z' + 1)
            alpha = 'A';
            
            cout << alpha++ << " ";
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