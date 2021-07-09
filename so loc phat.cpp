#include <bits/stdc++.h>
using namespace std;

void out (int n)
{
    queue <string> q;
    stack <string> s;
    q.push("6");
    q.push("8");
    while (true){
        string a = q.front();
        if (a.size()>n)
            break;
        s.push(a);
        string b = a;
        q.pop();
        q.push(a.append("6"));
        q.push(b.append("8"));
    }
    cout << s.size() << endl;
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
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
