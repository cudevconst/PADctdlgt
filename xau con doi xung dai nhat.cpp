#include <iostream>
using namespace std;

int out (string s)
{
    int n = s.size();
    int dp[n][n];
    for (int i=0; i<n; i++)
        dp[i][i] = 1;
    for (int cl=2; cl<=n; cl++){
        for (int i=0; i<n-cl+1; i++){
            int j = i+cl-1;
            if (cl==2 && s[i]==s[j])
                dp[i][j] = 2;
            else if (s[i]==s[j])
                dp[i][j] = dp[i+1][j-1] + 2;
            else
                dp[i][j] = max (dp[i+1][j], dp[i][j-1]);
        }
    }
    return dp[0][n-1];
}

int main()
{
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        cout << out(s) << endl;
    }
}
