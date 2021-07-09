#include <bits/stdc++.h>
using namespace std;

int out (string s, int d)
{
    map <char, int> m;
    int maxfre=0;
    for (int i=0; i<s.size(); i++){
        m[s[i]]++;
        if (m[s[i]] > maxfre)
            maxfre = m[s[i]];
    }
    return ((maxfre-1)*(d-1) <= (s.size()-maxfre) ? 1:-1);
}

int main()
{
    int t; cin>>t;
    while (t--){
        int d; cin>>d;
        string s; cin>>s;
        cout << out(s,d) << endl;
    }
}
