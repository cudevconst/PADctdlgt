#include <bits/stdc++.h>
using namespace std;

void out (int a[], int b[], int m, int n)
{
    int i=0, j=0;
    while (i<m && j<n){
        if (a[i]<b[j]){
            cout << a[i] << " ";
            i++;
        }
        else if (a[i]>b[j]){
            cout << b[j] << " ";
            j++;
        }
        else{
            cout << a[i] << " ";
            i++, j++;
        }
    }
    for (i; i<m; i++)
        cout << a[i] << " ";
    for (j; j<n; j++)
        cout << b[j] << " ";
    cout << endl;
    i=0, j=0;
    while (i<m && j<n){
        if (a[i]<b[j])
            i++;
        else if (a[i]>b[j])
            j++;
        else{
            cout << a[i] << " ";
            i++, j++;
        }
    }
    cout << endl;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        int m, n; cin>>m>>n;
        int a[m], b[n];
        for (int i=0; i<m; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
            cin>>b[i];
        sort (a, a+m);
        sort (b, b+n);
        out (a, b, m, n);
    }
}
