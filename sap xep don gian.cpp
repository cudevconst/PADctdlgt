#include <bits/stdc++.h>
using namespace std;

void out (int a[], int n)
{
    unordered_map <int,int> m;
    int dp[n];
    memset(dp, 0, sizeof(dp));
    int res = -1;
    for (int i=0; i<n; i++){
        if (m.find(a[i]-1) != m.end()){
            int lastIth = m[a[i]-1];
            dp[i] = dp[lastIth] + 1;
        }
        else
            dp[i] = 1;
        m[a[i]] = i;
        res = max (res,dp[i]);
    }
    cout << n-res << endl;
}

int main()
{
//    int t; cin>>t;
//    while (t--){
        int n; cin >> n;
        int a[n];
        for (int i=0; i<n; i++)
            cin >> a[i];
        out (a, n);
//    }
}
