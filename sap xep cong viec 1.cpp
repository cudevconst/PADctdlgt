#include <bits/stdc++.h>
using namespace std;
struct dat {
    int st, ed;
};
dat a[1010];
bool cmp (dat x, dat y)
{
    return x.ed < y.ed;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        for (int i=0; i<n; i++)
            cin >> a[i].st;
        for (int i=0; i<n; i++)
            cin >> a[i].ed;
        sort (a, a+n, cmp);

        int res = 1, i=0;
        for (int j=1; j<n; j++){
            if (a[j].st >= a[i].ed){
                ++res;
                i = j;
            }
        }
        cout << res << endl;
    }
}
