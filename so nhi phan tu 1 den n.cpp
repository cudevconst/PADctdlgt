#include <bits/stdc++.h>
using namespace std;

void out (int n)
{
    queue <string> q;
    q.push("1");
    while (n--){
        string a, b;
        a = q.front();
        cout << a << " ";
        q.pop();
        b = a;
        q.push(a.append("0"));
        q.push(b.append("1"));
    }
    cout << endl;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        out (n);
    }
}
