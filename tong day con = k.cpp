#include <bits/stdc++.h>
using namespace std;
int n, k, cnt, a[50];
vector <int> v;
vector <int> show[50];

void print()
{
    for (int i=cnt-1; i>=0; i--){
        for (int j=0; j<show[i].size(); j++)
            cout << show[i][j] << " ";
        cout << endl;
    }
    cout << cnt;
}

void PUSH()
{
    for (int i=0; i<v.size(); i++)
        show[cnt].push_back(v[i]);
    ++cnt;
}

void out (int l, int s)
{
    if (s == k)
        PUSH ();
    for (int i=l; i<n; i++){
        if (s < k){
            v.push_back(a[i]);
            out (i+1, s+a[i]);
            v.pop_back();
        }
    }
}

int main()
{
    cin >> n >> k;
    for (int i=0; i<n; i++)
        cin >> a[i];
    out (0,0);
    print();
}
