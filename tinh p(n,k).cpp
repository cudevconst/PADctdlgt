#include <bits/stdc++.h>
using namespace std;
long long M = 1000000007;
long long out (int n, int k)
{
    if (k>n)
        return 0;
    long long res = 1;
    for (int i=n-k+1; i<=n; i++)
        res = res*i%M;
    return res;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n, k; cin >> n >> k;
        cout << out (n,k) << endl;
    }
}
