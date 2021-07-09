#include <bits/stdc++.h>
using namespace std;

void out (long num)
{
    queue <string> q;
    q.push("1");
    while (true){
        string s1 = q.front();
        long long n = 0;
        for (int i=0; i<s1.size(); i++)
            n = n*10 + (int)(s1[i]-'0');
        if (n%num == 0){
            cout << s1 << endl;
            return;
        }
        string s2 = s1;
        q.pop();
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
}

int main ()
{
    int t; cin>>t;
    while (t--){
        long n; cin>>n;
        out (n);
    }
}
