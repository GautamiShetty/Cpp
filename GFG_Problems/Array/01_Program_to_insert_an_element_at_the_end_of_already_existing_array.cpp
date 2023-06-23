#include<iostream>
using namespace std;

void insertAtEnd(int *array, int sizeOfArray, int element)// int array[]
{
    array[sizeOfArray-1] = element;
} 
int main()
{
    int arr[4] = {1, 2, 3};
    insertAtEnd(arr, 4, 4);
    cout << endl;
    for (int i = 0; i < 4; i++)
    cout << arr[i] << ' ';
}