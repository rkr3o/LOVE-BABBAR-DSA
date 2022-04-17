#include <bits/stdc++.h>
using namespace std;

long long int lucifer(int n)
{
    int l = 0, h = n;
    long long mid;
    int ans = -1;

    while (l <= h)
    {
        mid = l + (h - l) / 2;
        long long int square = mid*mid;
 
        if(square == n )
        {
            return mid ;
        }
        if(square<n)
        {
            ans = mid ;
            l=mid+1;
        }
        else h=mid-1;
    }
    return ans ;
}
int main()
{
    int n;
    cin >> n;

    cout << lucifer(n);
}