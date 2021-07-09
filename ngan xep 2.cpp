#include <bits/stdc++.h>
using namespace std;

void print (stack <int> q)
{
    if (q.size()==0)
        cout << "NONE" << endl;
    else{
        cout << q.top() << endl;
    }
}

int main ()
{
    int t; cin>>t;
    stack <int> q;
    string cmd;
    while (t--){
        cin>>cmd;
        if (cmd == "PUSH"){
            int n; cin>>n;
            q.push(n);
        }
        if (cmd == "POP")
            q.pop();
        if (cmd == "PRINT")
            print (q);
    }
}
