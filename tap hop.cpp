#include <bits/stdc++.h>
using namespace std;
int n, k, s;
int a[100];
int res;

void out (int l, int sum, vector <int> &v)
{
    if (sum==s && v.size()==k)
        ++res;
    for (int i=l; i<n; i++){
        if (sum+a[i] <= s){
            v.push_back(a[i]);
            out (i+1, sum+a[i], v);
            v.pop_back();
        }
    }
}

int main()
{
    cin >> n >> k >> s;
    while (n && k && s){
        for (int i=0; i<n; i++)
            a[i] = i+1;
        vector <int> v;
        res = 0;
        out (0,0,v);
        cout << res << endl;
        cin >> n >> k >> s;
    }
}
