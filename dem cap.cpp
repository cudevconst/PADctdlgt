#include <bits/stdc++.h>
using namespace std;

int count_xy (int X, int Y[], int less5[], int m)
{
    int ans=0;
    if (X==0)
        return 0;
    if (X==1)
        return less5[0];
    int *p = upper_bound(Y, Y+m, X);
    ans = Y+m-p;
    ans += less5[0] + less5[1];
    if (X==2)
        ans -= less5[3] + less5[4];
    if (X==3)
        ans += less5[2];
    return ans;


}

int out (int X[], int Y[], int n, int m)
{
    int less5[5] = {0};
    int res=0;
    for (int i=0; i<m; i++)
        if (Y[i] < 5)
            less5[Y[i]]++;
    sort (Y, Y+m);
    for (int i=0; i<n; i++)
        res += count_xy (X[i], Y, less5, m);
    return res;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n, m; cin>>n>>m;
        int X[n], Y[m];
        for (int i=0; i<n; i++)
            cin>>X[i];
        for (int i=0; i<m; i++)
            cin>>Y[i];
        cout << out(X, Y, n, m) << endl;

    }
}
