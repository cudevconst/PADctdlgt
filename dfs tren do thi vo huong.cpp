#include <bits/stdc++.h>
using namespace std;
int v, e, s;
vector <int> g[1001];
bool check[1001];
void dfs (int s)
{
    cout << s << " ";
    check[s] = 1;
    for (int i=0; i<g[s].size(); i++)
        if (!check[g[s][i]])
            dfs(g[s][i]);
}

int main()
{
    int t; cin>>t;
    while (t--){
        cin>>v>>e>>s;
        for (int i=0; i<=v; i++)
            g[i].clear();
        for (int i=0; i<e; i++){
            int a, b; cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        for (int i=1; i<=v; i++)
            sort (g[i].begin(), g[i].end());
        memset (check, 0, sizeof(check));
        dfs(1);
        cout << endl;
    }
    return 0;
}
