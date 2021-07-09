#include <bits/stdc++.h>
using namespace std;

vector <int> g[1001];
int child[1001];
int x, y, u, v;
bool vis[1001];

void BFS (int u, int v)
{
    queue <int> q;
    q.push(u);
    while (!q.empty()){
        int top = q.front(); q.pop();
        vis[top] = 1;
        if (top == v)
            return;
        for (int i=0; i<g[top].size(); i++)
        {
            if (!vis[g[top][i]])
            {
                child[g[top][i]] = top;
                vis[g[top][i]] = 1;
                q.push(g[top][i]);
            }
        }
    }
}

void out ()
{
    if (!vis[v])
    {
        cout << -1 << endl;
        return;
    }
    vector <int> res;
    while (v != u)
    {
        res.push_back(v);
        v = child[v];
    }
    res.push_back(u);
    for (int i = res.size()-1; i>=0; i--)
        cout << res[i] << " ";
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> x >> y >> u >> v;

        for (int i=0; i<=1001; i++)
            g[i].clear();
        memset (vis, 0, sizeof(vis));

        for (int i=0; i<y; i++)
        {
            int a, b; cin >> a >> b;
            g[a].push_back(b);
        }

        BFS (u, v);
        out ();
    }
}
