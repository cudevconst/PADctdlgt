#include <iostream>
using namespace std;
#define ll long long
ll m = 1000000007;
ll out (ll n)
{
    if (n==1 || n==2)
        return 1;
    ll a = 1, b = 1;
    ll res = 0;
    for (ll i=3; i<=n; i++){
        res = (a+b)%m;
        a = b;
        b = res;
    }
    return res;
}
int main()
{
    int t; cin>>t;
    while (t--){
        ll n; cin>>n;
        cout << out (n) << endl;
    }
}
