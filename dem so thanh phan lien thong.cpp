#include <bits/stdc++.h>
using namespace std;
int v, e;
vector <int> g[1001];
bool vis[1001];
using namespace std;

void CLEAR ()
{
    for (int i=0; i<1001; i++)
        g[i].clear();
    memset (vis, 0, sizeof(vis));
}

void DFS (int u)
{
    vis[u] = 1;
    for (int i=0; i<g[u].size(); i++){
        if (!vis[g[u][i]])
            DFS (g[u][i]);
    }
}

int out ()
{
    int res = 0;
    for (int i=1; i<=v; i++)
        if (!vis[i]){
            ++res;
            DFS(i);
        }
    return res;
}

int main()
{
    int t; cin>>t;
    while (t--){
        cin>>v>>e;
        CLEAR();
        for (int i=0; i<e; i++){
            int a, b; cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
//        out ();
        cout << out() << endl;
    }
}
