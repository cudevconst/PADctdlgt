#include <iostream>
using namespace std;
#define ll long long
ll M = 1000000007;
ll a[10][10], m[10][10];
ll n, k;
void mul ( ll a[10][10],ll b[10][10])
{
    ll res[10][10];
    for (ll i=0; i<n; i++){
        ll sum = 0;
        for (ll j=0; j<n; j++){
            for (ll f=0; f<n; f++)
                sum += a[i][f]*b[f][j]%M;
            res[i][j]= sum%M;
            sum = 0;
        }
    }
    for (ll i=0; i<n; i++)
        for (ll j=0; j<n; j++)
            a[i][j] = res[i][j];
}

void out (ll k)
{
    if (k==0 || k==1)
        return;
    out (k/2);
    mul (a, a);
    if (k%2 != 0)
        mul (a, m);
}

int main()
{
    int t; cin >> t;
    while (t--){
        cin >> n >> k;
        for (ll i=0; i<n; i++)
            for (ll j=0; j<n; j++){
                cin >> a[i][j];
                m[i][j] = a[i][j];
            }
        out (k);
        for (ll i=0; i<n; i++){
            for (ll j=0; j<n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
}
