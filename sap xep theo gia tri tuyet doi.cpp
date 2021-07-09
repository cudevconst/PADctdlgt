#include <bits/stdc++.h>
using namespace std;

void out (int a[], int n, int x)
{
    for (int i=0; i<n; i++){
        int id=i;
        for (int j=i; j<n; j++)
            if (abs(x-a[id]) > abs(x-a[j]))
                id = j;
        swap (a[i], a[id]);
    }
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n, x; cin>>n>>x;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        out (a, n, x);
    }
}
