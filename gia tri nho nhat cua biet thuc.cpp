#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll out ()
{
    ll n; cin>>n;
    ll a[n], b[n];
    for (ll i=0; i<n; i++)
        cin>>a[i];
    for (ll i=0; i<n; i++)
        cin>>b[i];
    sort (a, a+n);
    sort (b, b+n, greater<ll>());
    ll res = 0;
    for (ll i=0; i<n; i++)
        res += a[i]*b[i];
    return res;
}

int main()
{
    int t; cin>>t;
    while (t--){
         cout << out () << endl;
    }
}
