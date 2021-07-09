#include <bits/stdc++.h>
using namespace std;

vector <int> g[1001];
bool vis[1001];
int v, e;
vector < pair<int,int> > gFake;
vector <pair <int,int> > res;

void Clear()
{
    for (int i=0; i<=1001; i++)
        g[i].clear();
    memset (vis, 0, sizeof(vis));
}

void DFS (int u)
{
    vis[u] = 1;
    for (int i=0; i<g[u].size(); i++)
        if (!vis[g[u][i]])
            DFS (g[u][i]);
}

int Connect_Com ()
{
    int res = 0;
    for (int i=1; i<=v; i++)
    {
        if (!vis[i])
        {
            ++res;
            DFS (i);
        }
    }
    return res;
}

int Bridges (int edge)
{
    for (int i=0; i<e; i++)
    {
        if (i != edge)
        {
            g[gFake[i].first].push_back(gFake[i].second);
            g[gFake[i].second].push_back(gFake[i].first);
        }
    }
    return Connect_Com();
}

void out ()
{
    int CCs = Connect_Com ();
    int CCsLater = 0;
    for (int i=0; i<e; i++)
    {
        Clear();
        CCsLater = Bridges (i);

        if (CCsLater > CCs)
        {
            if (gFake[i].first < gFake[i].second)
                res.push_back ({gFake[i].first, gFake[i].second});
            else
                res.push_back ({gFake[i].second, gFake[i].first});
        }
    }
    sort (res.begin(), res.end());
    for (int i=0; i<res.size(); i++)
        cout << res[i].first << " " << res[i].second << " ";
    cout << endl;
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        Clear();
        gFake.clear(); res.clear();
        cin >> v >> e;
        for (int i=0; i<e; i++)
        {
            int a, b; cin >> a >> b;
            gFake.push_back ({a, b});
            g[a].push_back (b);
            g[b].push_back (a);
        }

        out ();
    }
}
