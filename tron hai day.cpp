#include <bits/stdc++.h>
using namespace std;

void out (long a[], long b[], long n, long m)
{
    long i=0, j=0;
    while (i<n && j<m){
        if (a[i]<b[j]){
            cout << a[i] << " ";
            i++;
        }
        else if (a[i]>b[j]){
            cout << b[j] << " ";
            j++;
        }
        else{
            cout << a[i] << " " << b[j] << " ";
            i++, j++;
        }
    }
    for (i; i<n; i++)
        cout << a[i] << " ";
    for (j; j<m; j++)
        cout << b[j] << " ";
    cout << endl;
}

int main ()
{
    long t; cin>>t;
    while (t--){
        long n, m; cin>>n>>m;
        long a[n], b[m];
        for (long i=0; i<n; i++)
            cin>>a[i];
        for (long i=0; i<m; i++)
            cin>>b[i];
        sort (a, a+n);
        sort (b, b+m);
        out (a, b, n, m);
    }
}
