#include <bits/stdc++.h>
using namespace std;

int out (int n)
{
    bool a[n+1];
    memset (a, true, sizeof(a));
    a[0]=0, a[1]=0;
    for (int i=2; i*i<=n; i++)
        if (a[i]==1)
            for (int j=i*i; j<=n; j+=i)
                a[j] = 0;

    for (int i=2; i<=n/2; i++)
        if (a[i] && a[n-i])
            return i;
    return -1;

}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        if (out(n)==-1)
            cout << -1 << endl;
        else
            cout << out (n) << " " << n-out(n) << endl;
    }
}
