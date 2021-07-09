#include <bits/stdc++.h>
using namespace std;
bool vis[10][10];
int n, a[10][10];
vector <string> path;
bool safe (int row, int col)
{
    if (row<0 || row ==n || col<0 || col == n
        || vis[row][col] || !a[row][col])
        return 0;
    return 1;
}

void out (int row, int col, string way)
{
    if (row<0 || row==n || col<0 || col==n
        || vis[row][col] || !a[row][col])
            return;
    if (row==n-1 && col==n-1){
        path.push_back(way);
        return;
    }

    vis[row][col] = 1;

    if (safe(row+1,col)){
        way.push_back('D');
        out (row+1, col, way);
        way.pop_back();
    }

    if (safe(row-1,col)){
        way.push_back('U');
        out (row-1,col,way);
        way.pop_back();
    }

    if (safe(row,col+1)){
        way.push_back('R');
        out (row,col+1,way);
        way.pop_back();
    }
    if (safe(row,col-1)){
        way.push_back('L');
        out (row,col-1, way);
        way.pop_back();
    }

    vis[row][col] = 0;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        cin >> n;
        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++)
                cin>>a[i][j];
        memset (vis, 0, sizeof(vis));
        string way;
        path.clear();
        out (0, 0, way);
        if (path.size()>0){
            sort (path.begin(), path.end());
            for (int i=0; i<path.size(); i++)
                cout << path[i] << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
}
