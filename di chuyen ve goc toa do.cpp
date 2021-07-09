#include <bits/stdc++.h>
using namespace std;

long long out (int n, int m)
{
    if (!n || !m)
        return 1;
    long long a[n+1][m+1];
    for (int i=0; i<=n; i++)
        a[i][0] = 1;
    for (int i=0; i<=m; i++)
        a[0][i] = 1;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            a[i][j] = a[i-1][j] + a[i][j-1];
    return a[n][m];
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n, m; cin >> n >> m;
        cout << out (n,m) << endl;
    }
}
