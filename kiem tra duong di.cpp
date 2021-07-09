#include <bits/stdc++.h>
using namespace std;

vector <int> g[1001];
bool vis[1001];
int x, y, u, v;

void DFS (int u, int v)
{
    vis[u] = 1;
    if (vis[v])
        return;
    for (int i=0; i<g[u].size(); i++)
        if (!vis[g[u][i]])
            DFS (g[u][i], v);
}

bool out ()
{
    memset (vis, 0, sizeof(vis));
    DFS (u, v);
    if (vis[v])
        return 1;
    return 0;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        for (int i=0; i<=1001; i++)
            g[i].clear();

        cin >> x >> y;
        for (int i=0; i<y; i++)
        {
            int a, b; cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }

        int q; cin >> q;
        while (q--)
        {
            cin >> u >> v;
            if (out())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
