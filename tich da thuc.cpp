#include <bits/stdc++.h>
using namespace std;

void out (int a[], int b[], int n, int m)
{
    vector <pair <int,int>> v;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            v.push_back (make_pair(a[i]*b[j], i+j));
    }
    int len = v.size();
//    for (int i=0; i<len; i++)
//        cout << v[i].first << "x^" << v[i].second << " + ";
    bool check[len] = {0};
    for (int i=0; i<len; i++){
        if (!check[i]){
            for (int j=i+1; j<len; j++){
                if (v[i].second == v[j].second){
                    v[i].first += v[j].first;
                    check[j] = 1;
                }
            }
        }
    }
    for (int i=0; i<len; i++)
        if (!check[i])
            cout << v[i].first << " ";
    cout << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n, m; cin >> n >> m;
        int a[n], b[m];
        for (int i=0; i<n; i++)
            cin >> a[i];
        for (int i=0; i<m; i++)
            cin >> b[i];
        out (a,b,n,m);
    }
}
