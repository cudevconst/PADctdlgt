#include <iostream>
using namespace std;

int out (int v[], int w[], int n, int k)
{
    int dp[n+1][k+1];
    for (int i=0; i<=n; i++)
        dp[i][0] = 0;
    for (int i=0; i<=k; i++)
        dp[0][i] = 0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=k; j++){
            if (w[i-1] > j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max (dp[i-1][j],
                                dp[i-1][j-w[i-1]]+v[i-1]);

        }
    }
//    for (int i=0; i<=n; i++){
//        for (int j=0; j<=k; j++)
//            if (dp[i][j] < 10)
//                cout << 0 << dp[i][j] << " ";
//            else
//            cout << dp[i][j] << " ";
//        cout << endl;
//    }
    return dp[n][k];
}
int main()
{
    int t; cin>>t;
    while (t--){
        int n, k; cin>>n>>k;
        int v[n], w[n];
        for (int i=0; i<n; i++)
            cin>>w[i];
        for (int i=0; i<n; i++)
            cin>>v[i];
        cout << out (v,w,n,k) << endl;
    }
}
