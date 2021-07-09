#include <bits/stdc++.h>
using namespace std;
int n;
int a[1001][1001];
void out ()
{
    vector <int> v[n+1];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++)
            if (a[i][j])
                v[i].push_back(j+1);

    }
    for (int i=0; i<n; i++){
        for (int j=0; j<v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    cin >> n;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];
    out ();
    return 0;
}
