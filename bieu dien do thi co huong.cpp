#include <bits/stdc++.h>
using namespace std;

void out (int v, int e)
{
    vector <int> g[v+1];
    for (int i=1; i<=e; i++){
        int a, b;
        cin>>a>>b;
        g[a].push_back(b);
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
        out (v,e);
    }
    return 0;
}
