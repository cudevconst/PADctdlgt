#include <bits/stdc++.h>
using namespace std;

vector <int> g[1001];
int vis[1001];
int v, e;
bool check;

void DFS (int u)
{
    vis[u] = 1;
    for (int i=0; i<g[u].size(); i++)
    {
        int tmp = g[u][i];
        if (vis[tmp] == 1)
        {
            check = 1;
            return;
        }
        if (vis[tmp] == 0)
            DFS (tmp);
        vis[tmp] = 2;
    }
    vis[u] = 2;
}

void out ()
{
    for (int i=1; i<=v; i++)
    {
        memset (vis, 0, sizeof(vis));
        DFS (i);
    }
    if (check == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        for (int i=0; i<=1001; i++)
            g[i].clear();
        memset (vis, 0, sizeof(vis));
        check = 0;

        cin >> v >> e;
        for (int i=0; i<e; i++)
        {
            int a, b; cin >> a >> b;
            g[a].push_back(b);
        }
        out ();
    }
}
