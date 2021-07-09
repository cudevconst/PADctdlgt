#include <bits/stdc++.h>
using namespace std;

vector <int> g[1001];
int vis[1001];
int v, e;

int out (int u)
{
    queue <int> q;
    q.push(u);
    while (!q.empty())
    {
        u = q.front(); q.pop();
        vis[u] = 1;
        for (int i=0; i<g[u].size(); i++)
        {
            if (vis[g[u][i]] == 0)
                return 1;
            else if (vis[g[u][i]] == -1)
            {
                vis[g[u][i]] = 0;
                q.push(g[u][i]);
            }
        }
    }
    return 0;
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        for (int i=0; i<=1001; i++)
            g[i].clear();
        memset (vis, -1, sizeof(vis));

        cin >> v >> e;
        int a, b;
        for (int i=0; i<e; i++)
        {
            cin >> a >> b;
            g[a].push_back(b);
           // g[b].push_back(a);
        }
        if (out(a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
