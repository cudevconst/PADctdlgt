#include <bits/stdc++.h>
using namespace std;

struct dat{
   int id, deadl, profit;
};
dat a[1001];

bool cmp (dat x, dat y)
{
    return x.profit > y.profit;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        for (int i=0; i<n; i++){
            cin >> a[i].id >> a[i].deadl >> a[i].profit;
        }
        sort (a, a+n, cmp);
//        for (int i=0; i<n; i++)
//            cout << a[i].deadl << " " << a[i].profit << endl;

        int res=0, cnt=0, ok[1001] = {0};
        for (int i=0; i<n; i++){
            while (ok[a[i].deadl] && a[i].deadl > 0)
                a[i].deadl--;
            if (!ok[a[i].deadl] && a[i].deadl > 0){
                res += a[i].profit;
                cnt++;
                ok[a[i].deadl] = 1;
            }
        }
        cout << cnt <<  " " << res << endl;
    }
}


