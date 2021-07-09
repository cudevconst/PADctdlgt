#include <bits/stdc++.h>
using namespace std;
int a[10], n;
vector <int> v;

void print ()
{
    for (int i=0; i<v.size(); i++){
        if (!i && v.size()==1)
            cout << "(" << v[i] << ")";
        else if (!i)
            cout << "(" << v[i] << " ";
        else if (i==v.size()-1)
            cout << v[i] << ")";
        else
            cout << v[i] << " ";
    }
    cout << " ";
}

void out (int num, int res)
{
    if (res == 0)
        print();
    for (int i=num; i>0; i--){
        v.push_back(i);
        out (min(i,res-i), res-i);
        v.pop_back();
    }
}

int main()
{
    int t; cin>>t;
    while (t--){
        cin >> n;
        out (n, n);
        cout << endl;
    }
}
