#include <iostream>
#include <unordered_map>
using namespace std;

void findIndexes(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        if (m.find(sum - arr[i]) != m.end())
        {
            cout << m[sum - arr[i]] << " ... " << i << endl;
        }
        m[arr[i]] = i;
    }

    return;
}

int main()
{
    int arr[] = {8, 7, 2, 5, 3, 1}, sum;
    while (1)
    {
        cin >> sum;
        findIndexes(arr, sizeof(arr) / sizeof(arr[0]), sum);
    }
    return 0;
}