#include <bits/stdc++.h>
using namespace std;
int n, k, a[101];
bool check=0;

void print(vector <int> &v)
{
    for (int i=0; i<v.size(); i++){

        if (i==0)
            cout << "[" << v[i] << " ";
        else if (i==v.size()-1)
            cout << v[i] << "]";
        else
            cout << v[i] << " ";
    }
    cout << " ";

}

void backtrack (int sum, int l, vector <int> &v)
{
    if (sum==k){
        print(v);
        check = 1;
    }

    else{
        for (int i=l; i<n; i++){
            if (sum + a[i] <= k){
                v.push_back(a[i]);
                backtrack(sum+a[i], i+1, v);
                v.pop_back();
            }
        }
    }
}
int main()
{
    int t; cin>>t;
    while (t--){
        check=0;
        cin>>n>>k;
        for (int i=0; i<n; i++)
            cin>>a[i];
        vector <int> v;
        sort (a, a+n);
        backtrack(0, 0, v);
        if (!check)
            cout << -1 << endl;
        else
            cout << endl;
    }
}
