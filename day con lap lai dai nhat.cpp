#include <bits/stdc++.h>
using namespace std;

int out (string s)
{
    int len = s.size();
    int dp[len+1][len+1];

    for (int i=0; i<=len; i++)
        for (int j=0; j<=len; j++)
            dp[i][j] = 0;


    for (int i=1; i<=len; i++)
        for (int j=1; j<=len; j++)
            if (s[i-1] == s[j-1] && i != j)
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max (dp[i-1][j], dp[i][j-1]);

    return dp[len][len];
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        string s; cin>>s;
        cout << out(s) << endl;
    }
}
