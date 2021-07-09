#include <bits/stdc++.h>
using namespace std;

vector <int> g[1001];
bool vis[1001];
int v, e;
void BFS (int u)
{
    queue <int> q;
    q.push(u);
    while (!q.empty())
    {
        u = q.front(); q.pop();
        vis[u] = 1;
        for (int i=0; i<g[u].size(); i++)
        {
            if (!vis[g[u][i]])
            {
                vis[g[u][i]] = 1;
                q.push(g[u][i]);
            }
        }
    }
}

int out ()
{
    int res = 0;
    for (int i=1; i<=v; i++)
    {
        if (!vis[i])
        {
            ++res;
            BFS(i);
        }
        if (res >= 2)
            return 0;
    }
    return 1;
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
            g[a].push_back(b);
        }
        if (out())
            cout << "YES";
        else
            cout << "NO";
        cout << endl;

    }
}
