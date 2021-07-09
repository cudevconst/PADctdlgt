#include <bits/stdc++.h>
using namespace std;

void out (int n)
{
    queue <string> q;
    q.push("9");
    while (true){
        string a = q.front();
        if (stoi(a)%n==0){
            cout << a << endl;
            return;
        }
        q.pop();
        string b = a;
        q.push(a.append("0"));
        q.push(b.append("9"));
    }
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        out (n);
    }
}
