#include <bits/stdc++.h>
using namespace std;

void print (deque <int> q)
{
    if (q.size()==0)
        cout << "empty" << endl;
    else
        while (!q.empty()){
            cout << q.front() << " ";
            q.pop_front();
        }
    cout << endl;
}

int main ()
{
    deque <int> q;
    int i=0;
    while (i++<=200){
        string command;
        int n;
        cin>>command;
        if (command == "push"){
            cin>>n;
            q.push_back(n);
        }
        if (command == "pop")
            q.pop_back();
        if (command == "show")
            print(q);
    }
}
