#include <bits/stdc++.h>
using namespace std;
int x, y, u, v;
vector <int> g[1001];
int child[1001];
bool vis[1001];

void DFS (int u, int v)
{
    if (vis[v])
        return;
    vis[u] = 1;
    for (int i=0; i<g[u].size(); i++){
        if (!vis[g[u][i]]){
            child[g[u][i]] = u;
            DFS (g[u][i], v);
        }
    }

}

void out ()
{
    if (!vis[v]){
        cout << -1 << endl;
        return;
    }
    cout << child[3];
//    vector <int> res;
//    while (v!=u){
//        res.push_back(v);
//        v = child[v];
//    }
//    res.push_back(u);
//    for (int i=res.size()-1; i>=0; i--)
//        cout << res[i] << " ";
//    cout << endl;
}

void CLEAR()
{
    for (int i=0; i<1001; i++)
        g[i].clear();
    memset (vis, 0, sizeof(vis));
}

int main()
{
    int t; cin>>t;
    while (t--){
        CLEAR();
        cin >> x >> y >> u >> v;
        for (int i=0; i<y; i++){
            int a, b; cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        DFS (u, v);
        out();
    }
}
