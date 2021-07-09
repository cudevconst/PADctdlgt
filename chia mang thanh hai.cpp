#include <bits/stdc++.h>
using  namespace std;
long m=1000000007;
void out (long a[], long n, long k)
{
    sort (a, a+n);
    long num1=0, num2=0;
    int m = min(k, n-k);
    for (long i=0; i<n; i++){
        if (i<m)
            num1 += a[i];
        else
            num2 += a[i];
    }
    cout << num2-num1 << endl;
}

int
 main ()
{
    long t; cin>>t;
    while (t--){
        long n, k; cin>>n>>k;
        long a[n];
        for (long i=0; i<n; i++)
            cin>>a[i];
        out (a, n, k);
    }
}
