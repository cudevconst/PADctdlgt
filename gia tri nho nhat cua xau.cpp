#include <bits/stdc++.h>
using namespace std;

void out (int k, string s)
{
    priority_queue <int> q;
    int fre[27] = {0};
    for (int i=0; i<s.size(); i++)
        fre[s[i]-'A']++;
    for (int i=0; i<27; i++)
        if (fre[i])
            q.push(fre[i]);
    while (k--){
        int x = q.top();
        q.pop();
        x--;
        q.push(x);
    }
    long long res = 0;
    while (!q.empty()){
        res += pow(q.top(),2);
        q.pop();
    }
    cout << res << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int k; cin>>k;
        string s; cin>>s;
        out (k,s);
    }
}
