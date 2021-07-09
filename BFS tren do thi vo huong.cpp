#include <bits/stdc++.h>
using namespace std;
int v, e, u;
vector <int> g[1100];
bool vis[1100];

void BFS (int u)
{
    queue <int> q;
    q.push(u);
    while (!q.empty()){
        u = q.front();
        q.pop();
        vis[u] = 1;
        cout << u << " ";
        for (int i=0; i<g[u].size(); i++){
            if (!vis[g[u][i]]){
                q.push(g[u][i]);
                vis[g[u][i]] = 1;
            }
        }
    }
}

int main()
{
    int t; cin>>t;
    while (t--){
        cin >> v >> e >> u;
        for (int i=0; i<1100; i++)
            g[i].clear();
        memset (vis, 0, sizeof(vis));
        for (int i=0; i<e; i++){
            int a, b; cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        BFS (u);
        cout << endl;
    }
}
