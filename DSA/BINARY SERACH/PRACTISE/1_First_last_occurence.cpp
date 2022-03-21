// find the first and last occurence of any number

#include <bits/stdc++.h>
using namespace std;

int x = 0 ;
int y=0;

int lucifer(vector<int> arr, int n, int key)
{    
    int l = 0, h = n - 1, mid;
    int ans = 0;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            h = mid - 1;
        }
        else if (key > arr[mid])
        {
            l = mid + 1;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }

        x=ans;
    }

    return ans;
}
int lucifer2(vector<int> arr, int n, int key)
{
    int l = 0, h = n - 1, mid;
    int ans = 0;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            l = mid + 1;
        }
        else if (key > arr[mid])
        {
            l = mid + 1;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }

        y=ans;
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int>vect;
    int key;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        int a ;
        cin>>a;
        vect.push_back(a);
    }

    cout << lucifer(vect, n, key) <<" "<<lucifer2(vect , n , key);
    cout<<endl;

  cout<<abs(x-y)+1;
}