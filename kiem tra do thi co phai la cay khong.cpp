#include <bits/stdc++.h>
using namespace std;

vector <int> graph[1001];
int vis[1001];
int n;

void DFS (int u)
{
    vis[u] = 1;
    for (int i=0; i<graph[u].size(); i++)
    {
        if (!vis[graph[u][i]])
            DFS(graph[u][i]);
    }
}

int is_cycle ()
{
    queue <int> q;
    q.push(1);
    while (!q.empty())
    {
        int u = q.front(); q.pop();
        vis[u] = 2;
        for (int i=0; i<graph[u].size(); i++)
        {
            if (vis[graph[u][i]] == 1)
                return 1;
            else if (!vis[graph[u][i]])
            {
                vis[graph[u][i]] = 1;
                q.push(graph[u][i]);
            }
        }
    }
    return 0;
}

int is_tree ()
{
    int connect = 0;
    for (int i=1; i<=n; i++)
    {
        if (!vis[i])
        {
            ++connect;
            DFS(i);
        }
    }
    if (connect >= 2)
        return 0;

    memset (vis, 0, sizeof(vis));
    if (is_cycle())
        return 0;

    return 1;

}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        for (int i=0; i<=1001; i++)
            graph[i].clear();
        memset (vis, 0, sizeof(vis));

        cin >> n;
        for (int i=1; i<n; i++)
        {
            int a, b; cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        if (is_tree())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
