#include <bits/stdc++.h>
using namespace std;

void out (int a[], int n, int k)
{
    sort (a, a+n);
    int i=n-1;
    int b=a[-1];
//    while (i>=0 && k>0){
////        if (a[i]!=b){
//            cout << a[i] << " ";
//            b = a[i];
//            k--;
//        }
//        i--;
//    }
//    cout << endl;
    while (k){
        cout << a[i] << " ";
        i--;
        k--;
    }
    cout << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n, k; cin>>n>>k;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        out (a,n,k);
    }
}
