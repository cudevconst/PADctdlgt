#include <bits/stdc++.h>
#define ll long long
ll M = pow(10,9)+7;

ll getk (ll n)
{
    ll k=0;
    while (n>=1){
        k = k*10 + n%10;
        n /= 10;
    }
    return k;
}


ll out (ll n, ll k)
{
    if (k == 1) return n%M;
    ll res = out(n, k/2);
    if (k%2 == 0)
        return res*res%M;
    return (n*(res*res%M))%M;

}

using namespace std;
int main()
{
    int t; cin>>t;
    while (t--){
        ll n, k; cin>>n;
        k = getk(n);
//        cout << k;
        cout << out(n,k) << endl;
    }
}
