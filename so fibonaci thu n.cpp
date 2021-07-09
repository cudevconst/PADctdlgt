#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M = 1000000007;
ll f[2][2], m[2][2];

void power (ll f[2][2], ll m[2][2])
{
    ll a = (f[0][0]*m[0][0]%M + f[0][1]*m[1][0]%M)%M;
    ll b = (f[0][0]*m[0][1]%M + f[0][1]*m[1][1]%M)%M;
    ll c = (f[1][0]*m[0][0]%M + f[1][1]*m[1][0]%M)%M;
    ll d = (f[1][0]*m[0][1]%M + f[1][1]*m[1][1]%M)%M;
    f[0][0] = a;
    f[0][1] = b;
    f[1][0] = c;
    f[1][1] = d;
}

void out (ll n)
{
    if (n==0 || n==1)
        return;
    out (n/2);
    power(f,f);
    if (n%2 != 0)
        power (f,m);

}

int main()
{
    int t; cin>>t;
    while (t--){
        ll n; cin >> n;
        f[0][0] = f[0][1] = f[1][0] = 1;
        f[1][1] = 0;
        m[0][0] = m[0][1] = m[1][0] = 1;
        m[1][1] = 0;
        if (!n)
            cout << 0 << endl;
        else{
            out (n-1);
            cout << f[0][0] << endl;
        }
    }
}
