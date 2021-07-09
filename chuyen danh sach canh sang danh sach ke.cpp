#include <bits/stdc++.h>
using namespace std;

void out (int v, int e)
{
    vector <int> g[v+1];
    for (int i=1; i<=e; i++){
        int x, y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int i=1; i<=v; i++)
        sort (g[i].begin(), g[i].end());
    for (int i=1; i<=v; i++){
        cout << i << ": ";
        for (int j=0; j<g[i].size(); j++)
            cout << g[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int t; cin>>t;
    while (t--){
        int v, e; cin>>v>>e;
        out (v, e);
    }
    return 0;
}
