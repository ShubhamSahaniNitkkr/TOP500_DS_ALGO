#include <iostream>
using namespace std;

void sortBinaryArr(int arr[], int n)
{
    int pivot = 1, j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return;
}

int main()
{
    int arr[] = {1, 0, 0, 0, 1, 0, 1, 1}, n = sizeof(arr) / sizeof(arr[0]);
    sortBinaryArr(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}