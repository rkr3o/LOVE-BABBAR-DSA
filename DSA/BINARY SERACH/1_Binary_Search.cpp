#include <bits/stdc++.h>
using namespace std;
int lucifer(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {

        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Your Key : ";
    cin >> key;

    int index = lucifer(arr, n, key);
    cout << index;
}