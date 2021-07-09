#include <bits/stdc++.h>
using namespace std;
int n, a[10][10];
bool vst[10][10];

bool OK (int row, int col)
{
    if (row == -1 || row == n || col == -1 || col == n
        || vst[row][col] || a[row][col] == 0)
            return 0;
    return 1;
}

void out (int row, int col, vector <string> &path, string way)
{
    if (row == -1 || col == -1 || row == n || col == n
        || vst[row][col] || a[row][col] == 0)
            return;
    if (row == n-1 && col == n-1){
        path.push_back (way);
        return;
    }

    vst[row][col] = 1;

    if (OK(row+1, col)){
        way.push_back ('D');
        out (row+1, col, path, way);
        way.pop_back();
    }

    if (OK(row, col+1)){
        way.push_back('R');
        out (row, col+1, path, way);
        way.pop_back();
    }
    vst[row][col] = 0;
}

int main()
{
    int t; cin>>t;
    while (t--){
        cin>>n;
        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++)
                cin>>a[i][j];
        memset (vst, 0, sizeof(vst));
        vector <string> path;
        string way;
        out (0,0, path, way);
        sort (path.begin(), path.end());
        if (!path.size())
            cout << -1 << endl;
        else
            for (int i=0; i<path.size(); i++)
                cout << path[i] << " ";
        cout << endl;
    }
}
