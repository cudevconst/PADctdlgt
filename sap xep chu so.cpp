#include <iostream>
#include <set>
#define ll long long
using namespace std;

void out ( ll a[], ll n)
{
    set <int> num;
    set <int>::iterator it;
    for (ll i=0; i<n; i++){
        ll fake = a[i];
        while (fake>10){
            num.insert(fake%10);
            fake /= 10;
        }
    }
    for (it=num.begin(); it!=num.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        ll n; cin>>n;
        ll a[n];
        for (ll i=0; i<n; i++)
            cin>>a[i];
        out (a, n);

    }
}
