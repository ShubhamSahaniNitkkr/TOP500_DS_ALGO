#include <iostream>
#include <unordered_set>
using namespace std;

void findSum(int arr[], int n)
{
    unordered_set<int> arrSet;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (arrSet.find(sum) != arrSet.end())
        {
            cout << "exist";
            return;
        }
        else
        {
            arrSet.insert(sum);
        }
    }
    cout << "not exist!" << endl;
    return;
}

int main()
{
    int arr[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2}, n = sizeof(arr) / sizeof(arr[0]);

    findSum(arr, n);

    return 0;
}