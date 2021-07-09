#include <bits/stdc++.h>
using namespace std;

vector <int> g[1001];
bool vis[1001];
int v, e;

void BFS (int x)
{
    queue <int> q;
    q.push(x);
    while (!q.empty())
    {
        int u = q.front(); q.pop();
        vis[u] = true;
        for (int i=0; i<g[u].size(); i++)
        {
            if (!vis[g[u][i]])
            {
                vis[g[u][i]] = true;
                q.push(g[u][i]);
            }
        }
    }
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        for (int i=0; i<=1001; i++)
            g[i].clear();
        memset (vis, 0, sizeof(vis));

        cin >> v >> e;

        for (int i=0; i<e; i++)
        {
            int a, b; cin >> a >> b;
            g[a].push_back (b);
            g[b].push_back (a);
        }

        int res = 0;
        for (int i=1; i<=v; i++)
        {
            if (!vis[i])
            {
                ++res;
                BFS(i);
            }
        }
        cout << res << endl;
    }
}
