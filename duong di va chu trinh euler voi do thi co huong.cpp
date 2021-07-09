#include <bits/stdc++.h>
using namespace std;
int v, e;

int isEuler (vector <int> &deg)
{
    int odd = 0;
    for (int i=0; i<v; i++)
    {
        if (deg[i] > 0)
            return 0;
    }
    return 1;
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> v >> e;
        vector <int> deg (v, 0);
        for (int i=0; i<e; i++)
        {
            int a, b; cin >> a >> b;
            deg[a-1]++, deg[b-1]--;
        }
        cout << isEuler (deg) << endl;
    }
}
