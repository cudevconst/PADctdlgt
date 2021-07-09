#include <bits/stdc++.h>
using namespace std;

void out (long long a[], long long n)
{
    long long min_sum = a[0]+a[1];
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++)
            if (abs(a[i]+a[j]) < abs(min_sum))
                min_sum = a[i]+a[j];
    }
    cout << min_sum << endl;
}

int main ()
{
    long long t; cin>>t;
    while (t--){
        long long n; cin>>n;
        long long a[n];
        for (long long i=0; i<n; i++)
            cin>>a[i];
        out (a, n);
    }
}
