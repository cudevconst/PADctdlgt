#include <bits/stdc++.h>
using namespace std;
vector <int> vec[1001];
bool check[1001];

void DFS (int dest)
{
    cout << dest << " ";
    for (int i=0; i<vec[dest].size(); i++){
        if (!check[ vec[dest][i] ]){
            check[ vec[dest][i] ] = 1;
            DFS (vec[dest][i]);
        }
    }
}

int main()
{
    int t; cin>>t;
    while (t--){

        int v, e, dest;
        cin >> v >> e >> dest;

        for (int i=0; i<1001; i++)
            vec[i].clear();
        memset (check, 0, sizeof(check));

        for (int i=0; i<e; i++){
            int a, b; cin >> a >> b;
            vec[a].push_back(b);
        }
        check[dest] = 1;
        DFS (dest);

    }
}
