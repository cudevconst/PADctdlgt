#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector <int> v;
    for (int i=0; i<n; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    int x; cin>>x;
    for (int i=0; i<v.size(); i++){
        if (v[i] == x){
            v.erase (v.begin()+i);
            i--;
        }
    }
    for (int i=0; i<v.size(); i++)
        cout << v[i] << " ";
}
