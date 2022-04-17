#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> arr, int n)
{
            int l = 0 , h = n-1 , mid ;

            while (l<h)
            {
                mid = l+(h-l)/2;
                if(arr[mid]>=arr[0])
                {
                  l=mid+1;   
                }
                else h=mid;
            }

            return l;
            
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << getPivot(arr, n);
}