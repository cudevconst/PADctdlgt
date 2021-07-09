#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin>>t;
    deque <int> q;
    while (t--){
        string cmd; cin>>cmd;
        int x;
        if (cmd=="PUSHFRONT"){
            cin>>x;
            q.push_front(x);
        }
        if (cmd=="PRINTFRONT")
            if (q.empty())
                cout << "NONE" << endl;
            else
                cout << q.front() << endl;
        if (cmd=="POPFRONT" && !q.empty())
            q.pop_front();
        if (cmd=="PUSHBACK"){
            cin>>x;
            q.push_back(x);
        }
        if (cmd=="PRINTBACK")
            if (q.empty())
                cout << "NONE" << endl;
            else
                cout << q.back() << endl;
        if (cmd=="POPBACK" && !q.empty())
            q.pop_back();
    }
}
