#include <iostream>
using namespace std;

int out (int a[], int n)
{
    int l=0, r=n-1;
    int res = 0;
    while (l <= r){
        int mid = (r+l)/2;
        if (!a[mid]){
            res += (mid-l+1);
            l = mid+1;
        }
        else if (a[mid])
            r = mid-1;
    }
    return res;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        cout << out(a,n) << endl;
    }
}
