#include<iostream>
using namespace std;

void insertAtIndex(int array[], int sizeOfArray, int element, int index)
{
    if(index>= sizeOfArray)
    {
        cout << endl << "Entered index is greater than size of array";
        return;
    }
    for(int i = sizeOfArray-1; i >= index; i--)
    {
        array[i] = array[i-1];
    }
    array[index] = element;
}
int main()
{
    int arr[4] = {1, 2, 3, 5};
    insertAtIndex(arr, 4, 4, 2);
    cout << endl;
    for (int i = 0; i < 4; i++)
        cout << arr[i] << ' ';
}