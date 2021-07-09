#include <iostream>
using namespace std;

int out (int a[], int n, int x)
{
    int l=0, r=n-1;
    while (l<=r){
        int mid = (l+r)/2;
        if (a[mid]==x)
            return 1;
        if (a[mid] > x)
            r = mid-1;
        else
            l = mid+1;
    }
    return -1;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n, x; cin>>n>>x;
        int a[n];
        for (int i=0; i<n; i++)
            cin >> a[i];
        cout << out (a,n,x) << endl;
    }
}
