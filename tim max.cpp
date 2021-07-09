#include <bits/stdc++.h>
using namespace std;
long m = 1000000007;

void out (long a[], long n)
{
    long sum = 0;
    sort (a, a+n);
    for (long i=1; i<n; i++){
        sum += ((i%m)*(a[i])%m)%m;
        sum %= m;
    }
    cout << sum << endl;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        long n; cin>>n;
        long a[n];
        for (long i=0; i<n; i++)
            cin >> a[i];
        out (a, n);
    }
}
