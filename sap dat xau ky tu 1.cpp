#include <bits/stdc++.h>
using namespace std;

int out (string s)
{
    unordered_map <char,int> m;
    int maxf = 0;
    for (int i=0; i<s.size(); i++){
        m[s[i]]++;
        if (m[s[i]] > maxf)
            maxf = m[s[i]];
    }
    if (maxf <= s.size()-maxf+1)
        return 1;
    return -1;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        cout << out(s) << endl;
    }
}
