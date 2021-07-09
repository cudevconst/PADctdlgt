#include <bits/stdc++.h>
using namespace std;

vector <int> g[1001];
bool vis[1001];
int v, e;

void DFS (int u)
{
    vis[u] = 1;
    for (int i=0; i<g[u].size(); i++)
        if (!vis[g[u][i]])
            DFS(g[u][i]);
}

int is_Euler(vector <int> &degree)
{
    int odd = 0;
    for (int i=1; i<v; i++)
        if (degree[i]%2 != 0)
            ++odd;
    if (odd == 0)
        return 2;
    if (odd <= 2)
        return 1;
    return 0;
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        for (int i=0; i<g[i].size(); i++)
            g[i].clear();
        memset (vis, 0, sizeof(vis));

        cin >> v >> e;
        vector <int> degree (v, 0);
        for (int i=0; i<e; i++)
        {
            int a, b; cin >> a >> b;
            ++degree[a-1], ++degree[b-1];
        }
        cout << is_Euler(degree) << endl;
    }
}
