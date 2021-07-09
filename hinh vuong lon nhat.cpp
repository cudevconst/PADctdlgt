#include <iostream>
using namespace std;
int n, m, a[500][500];

int out ()
{
    int res[n+1][m+1];
    for (int i=0; i<=n; i++)
        res[i][0] = 0;
    for (int j=0; j<=m; j++)
        res[0][j] = 0;
    int ans = 0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (!a[i-1][j-1])
                res[i][j] = 0;
            else
                res[i][j] = min(res[i-1][j], min(res[i][j-1], res[i-1][j-1])) + 1;
            ans = max (res[i][j], ans);
        }
    }
//    for (int i=0; i<=n; i++){
//        for (int j=0; j<=m; j++)
//            cout << res[i][j] << " ";
//        cout << endl;
//    }
    cout << endl;
    return ans;
}

int main()
{
    int t; cin>>t;
    while (t--){
        cin >> n >> m;
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                cin >> a[i][j];
        cout << out () << endl;
    }
}
