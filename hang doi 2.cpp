#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin>>t;
    queue <int> q;
    while (t--){
        string cmd;
        cin>>cmd;
        if (cmd=="PUSH"){
            int x; cin>>x;
            q.push(x);
        }
        if (cmd=="PRINTFRONT" && !q.empty())
            cout << q.front() << endl;
        if (cmd=="PRINTFRONT" && q.empty())
            cout << "NONE" << endl;
        if (cmd=="POP" && !q.empty())
            q.pop();
    }
}
