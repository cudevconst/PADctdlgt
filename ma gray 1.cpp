#include <bits/stdc++.h>
using namespace std;

void out (int n)
{
    vector <string> v;
    v.push_back ("0");
    v.push_back ("1");
    while (n--){
        for (int i=v.size()-1; i>=0; i--)
            v.push_back(v[i]);
        for (int i=0; i<v.size()/2; i++)
            v[i] = "0" + v[i];
        for (int i=v.size()/2; i<v.size(); i++)
            v[i] = "1" + v[i];
    }
    for (int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        n--;
        out (n);
    }
}
