#include <bits/stdc++.h>
using namespace std;

int out (int a[], int n, int x)
{
    bool sum[n+1][x+1];
    for (int i=0; i<=n; i++)
        sum[i][0] = 1;
    for (int i=1; i<=x; i++)
        sum[0][i] = 0;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=x; j++){
            if (a[i-1] > j)
                sum[i][j] = sum[i-1][j];
            if (a[i-1] <= j)
                sum[i][j] = sum[i-1][j] ||
                            sum[i-1][j-a[i-1]];

        }
        for (int i=0; i<=n; i++){
            for (int j=0; j<=x; j++)
                cout << sum[i][j] << " ";
            cout << endl;
        }
        return sum[n][x];
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n, x; cin>>n>>x;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        if (out(a,n,x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
