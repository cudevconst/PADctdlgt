#include <bits/stdc++.h>
using namespace std;



void out (string n)
{
    queue <string> q;
    q.push("1");
    long long cnt=0;
    while (true){
        string a = q.front();
        if (a<=n && a.size()<=n.size())
            cout << a << " ";
        if (a>n && a.size()==n.size())
            cout << a << " ";
        if (a>n || a.size()>n.size())
            break;
        string b = a;
        q.pop();
        q.push(a.append("0"));
        q.push(b.append("1"));
    }
    cout << endl;
//    cout << cnt << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        string n; cin>>n;
        out (n);
    }
}
