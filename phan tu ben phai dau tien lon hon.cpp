#include <iostream>
using namespace std;

int out (int a[], int n, int x, int i)
{
    i += 1;
    for (i; i<n; i++)
        if (a[i] > x)
            return a[i];
    return -1;
}

int main()
{
    int t; cin >> t;
    while (t--){
        int n; cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
            cout << out (a,n,a[i],i) << " ";
        cout << endl;
    }
}
