#include <bits/stdc++.h>
using namespace std;
#define ll long long
void out (int n)
{
    ll ugly[n];
    ll i2 = 0, i3 = 0, i5 = 0;
    ll m2 = 2, m3 = 3, m5 = 5;
    ll ugly_now=1;
    ugly[0] = 1;
    for (ll i=1; i<n; i++){

        ugly_now = min (m2, min(m3, m5));
        ugly[i] = ugly_now;

        if (ugly_now == m2){
            i2++;
            m2 = ugly[i2]*2;
        }

        if (ugly_now == m3){
            i3++;
            m3 = ugly[i3]*3;
        }

        if (ugly_now == m5){
            i5++;
            m5 = ugly[i5]*5;
        }
    }
    cout << ugly_now << endl;

}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        out (n);
    }
}
