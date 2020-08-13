#include <iostream>
#include <unordered_map>
using namespace std;

void findSum(int arr[], int n)
{
    unordered_map<int, int> arrMap;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        auto it = arrMap.find(sum);
        while (it != arrMap.end() && it->first == sum)
        {
            cout << it->second + 1 << "..." << i << endl;
            it++;
        }

        arrMap.insert(make_pair(sum, i));
    }
    return;
}

int main()
{
    int arr[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2}, n = sizeof(arr) / sizeof(arr[0]);
    findSum(arr, n);
    return 0;
}