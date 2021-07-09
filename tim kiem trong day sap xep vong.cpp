#include <bits/stdc++.h>
using namespace std;

long findL (long a[], long n, long x)
{
    for (long i=0; i<n; i++)
        if (a[i] == x)
            return i+1;
}
long findR (long a[], long n, long x)
{
    for (long i=n-1; i>=0; i--)
        if (a[i] == x)
            return i+1;
}
int main()
{
    int t; cin>>t;
    while (t--){
        long n, x; cin>>n>>x;
        long a[n];
        for (long i=0; i<n; i++)
            cin>>a[i];
        long L=a[0], R=a[n-1];
        L = abs(L-x), R = abs(R-x);
        if (L<R)
            cout << findL(a, n, x) << endl;
        else
            cout << findR(a, n, x) << endl;
    }
}
