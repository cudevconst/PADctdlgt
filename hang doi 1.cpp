#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        deque<int> q;
        while (n--){
            int cmd; cin>>cmd;
            if (cmd==1)
                cout << q.size() << endl;
            if (cmd==2){
                if (q.empty())
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            if (cmd==3){
                int num; cin>>num;
                q.push_back(num);
            }
            if (cmd==4 && !q.empty())
                q.pop_front();
            if (cmd==5){
                if (q.empty())
                    cout << -1 << endl;
                else
                    cout << q.front() << endl;
            }
            if (cmd==6){
                if (q.empty())
                    cout << -1 << endl;
                else
                    cout << q.back() << endl;
            }

        }
    }
}
