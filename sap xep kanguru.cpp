#include <bits/stdc++.h>
using namespace std;

int out (int a[], int n)
{
    sort (a, a+n);
    int j=n/2-1;
    int res = n;
    for (int i=n-1; i>=n/2 && j>=0; i--){
        while (j>=0){
            if (a[i] >= a[j]*2){
                j--;
                res--;
                break;
            }
            j--;
        }
    }
//    cout << endl;
    return res;

}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
            cin >> a[i];
        cout << out(a,n) << endl;
    }
}
