#include <iostream>
using namespace std;
#define ll long long

void out (ll a[], ll b[], ll c[], ll x, ll y, ll z)
{
    ll i, j, k;
    i = j = k = 0;
    bool check = 0;
    while (i<x && j<y && k<z){
        ll minVal = min (a[i], min(b[j], c[k]));
        if (a[i] == b[j] && b[j] == c[k]){
            cout << a[i] << " ";
            i++, j++, k++;
            check = 1;
        }
        else if (a[i] == minVal)
            i++;
        else if (b[j] == minVal)
            j++;
        else if (c[k] == minVal)
            k++;
    }
    if (check)
        cout << endl;
    else
        cout << -1 << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        ll x, y, z; cin>>x>>y>>z;
        ll a[x], b[y], c[z];
        for (ll i=0; i<x; i++)
            cin >> a[i];
        for (ll i=0; i<y; i++)
            cin >> b[i];
        for (ll i=0; i<z; i++)
            cin >> c[i];
        out (a,b,c,x,y,z);
    }
}
