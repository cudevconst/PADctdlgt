#include <bits/stdc++.h>
using namespace std;

int out (int a[], int n)
{
    sort (a, a+n);
    int L=a[0], R=a[n-1];
    int cnt=0, id=0;
    while (L<=R){
        bool check = 1;
        for (int i=0; i<n; i++){
            if (a[i]==L){
                check = 0;
                break;
            }
            if (a[i] > L)
                break;
        }
        if (check)
            ++cnt;
        L++;
    }
    return cnt;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        cout << out(a,n) << endl;

    }
}
