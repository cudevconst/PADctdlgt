#include <bits/stdc++.h>
using namespace std;

void out (int a[], int fakea[], int n)
{
    sort (fakea, fakea+n);
    int st=n+1, ed=-1;
    for (int i=0; i<n; i++){
        if (a[i] != fakea[i]){
            st = min(st, i);
            ed = max(ed, i);
        }
    }
    cout << st+1 << " " << ed+1 << endl;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int a[n], fakea[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
            fakea[i] = a[i];
        }
        out (a, fakea, n);
    }
}
