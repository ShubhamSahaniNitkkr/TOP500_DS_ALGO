#include <iostream>
#include <unordered_map>
using namespace std;

void findSum(int arr[], int n, int sum)
{
    unordered_map<int, int> arrMap;

    for (int i = 0; i < n; i++)
    {
        if (arrMap.find(sum - arr[i]) != arrMap.end())
        {
            cout << "exist at " << arrMap.at(sum - arr[i]) << " and " << i << endl;
            return;
        }

        arrMap[arr[i]] = i;
    }
    cout << "not exist!" << endl;
    return;
}

int main()
{
    int arr[] = {8, 7, 2, 5, 3, 1}, sum, n = sizeof(arr) / sizeof(arr[0]);

    while (1)
    {
        cin >> sum;
        findSum(arr, n, sum);
    }

    return 0;
}