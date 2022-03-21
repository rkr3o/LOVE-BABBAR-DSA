#include <bits/stdc++.h>
using namespace std;

// find pivot
int getPivot(int arr[], int n)
{
    int l = 0, h = n - 1, mid;

    while (l < h)
    {
        mid = l + (h - l) / 2;
        if (arr[mid] >= arr[0])
        {
            l = mid + 1;
        }
        else
            h = mid;
    }
    return l;
}
int BinSearch(int arr[], int n, int key)
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

int result(int arr[], int n, int key)
{
    int pivot = getPivot(arr, n);

    if (key > pivot and key < arr[n - 1])
    {
        return BinSearch(arr ,  n , key);
    }
    else 
    return BinSearch(arr , )
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int key;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    getPivot(arr, n);
    BinSearch(arr, n, key);

    result(arr, n, key);
}