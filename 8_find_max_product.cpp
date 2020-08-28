#include <iostream>
using namespace std;

int maxProduct(int arr[], int n)
{
    int max1 = arr[0], max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
            max2 = arr[i];
    }

    return max1 * max2;
}

int main()
{
    int arr[] = {-10, -3, 5, 6, -2};
    cout << maxProduct(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}