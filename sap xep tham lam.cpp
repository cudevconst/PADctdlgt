#include <bits/stdc++.h>
using namespace std;

bool out (int a[], int n)
{
    int fakea[n];
    for (int i=0; i<n; i++)
        fakea[i] = a[i];
    sort (a, a+n);
    for (int i=0; i<n; i++)
        if (a[i]!=fakea[i] && a[i]!=fakea[n-i-1])
            return 0;
    return 1;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        if (out(a,n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
