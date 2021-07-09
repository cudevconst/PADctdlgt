#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll M = pow(10,9)+7;

ll out (ll n, ll k)
{
    int C[k+1];
    for (ll i=0; i<=k; i++)
        C[i]=0;
    C[0]=1;
    for (ll i=1; i<=n; i++)
        for (ll j=min(i,k); j>0; j--)
            C[j] = (C[j]+C[j-1])%M;
    return C[k];
}
int main()
{
    ll t; cin>>t;
    while (t--){
        ll n, k; cin>>n>>k;
        cout << out(n,k) << endl;
    }
}
