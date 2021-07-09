#include <bits/stdc++.h>
using namespace std;

vector <int> vec[1001];
bool ok[1001];

void BFS (int top)
{
    queue <int> q;
    q.push(top);
    ok[top] = 1;

    while (!q.empty())
    {
        top = q.front();
        cout << top << " ";
        q.pop();

        for (int i=0; i<vec[top].size(); i++)
        {
            if (!ok[vec[top][i]])
            {
                q.push( vec[top][i] );
                ok[vec[top][i]] = 1;
            }
        }
    }
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int v, e, top;
        cin >> v >> e >> top;

        for (int i=0; i<=1001; i++)
            vec[i].clear();
        memset(ok, 0, sizeof(ok));

        for (int i=0; i<e; i++)
        {
            int a, b; cin >> a >> b;
            vec[a].push_back(b);
        }

        BFS (top);
        cout << endl;

    }
}
