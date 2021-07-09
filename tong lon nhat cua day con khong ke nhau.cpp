#include <iostream>
using namespace std;

int out (int a[], int n)
{
    int res[n];
    res[0] = a[0];
    res[1] = max (a[0], a[1]);
    for (int i=2; i<n; i++)
        res[i] = max (res[i-2]+a[i], res[i-1]);
    return res[n-1];
}

int main()
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
