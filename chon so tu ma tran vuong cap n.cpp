#include <bits/stdc++.h>
using namespace std;
int n, k, cnt=0;
int a[20][20];
bool vis[20];
vector <int> res;
vector <int> ans[20];


void PRINT ()
{
    if (res.size()==n){
        for (int i=0; i<res.size(); i++)
            ans[cnt].push_back(res[i]);
        ++cnt;
    }
}

void out ( int row, int s)
{
    if (s==k)
        PRINT();
    for (int i=1; i<=n; i++){
        if (!vis[i]){
            vis[i] = 1;
            res.push_back(i);
            out (row+1, s+a[row][i]);
            vis[i] = 0;
            res.pop_back();

        }
    }
}

int main()
{
    cin >> n >> k;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin >> a[i][j];

    vis[20] = {0};
    out (1,0);
    cout << cnt << endl;
    for (int i=0; i<cnt; i++){
        for (int j=0; j<ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}
