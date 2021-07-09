#include <bits/stdc++.h>
#define ll long long
ll m = 123456789;
using namespace std;

ll out (ll n, ll k)
{
    if (k==0)
        return 1;
    if (k==1)
        return n%m;
    else if (k%2==0)
        return (out(n*n%m, k/2));
    return (n*out(n*n%m, k/2))%m;

}

int main()
{
    int t; cin>>t;
    while (t--){
        ll n;
        cin >>n;
        n-=1;
        cout << out(2, n) << endl;
    }
}
