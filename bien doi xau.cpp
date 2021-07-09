#include <bits/stdc++.h>
using namespace std;

int out (string s1, string s2)
{
    int cnt = 0;
    int a[26]={0};
    for (int i=0; i<s1.size(); i++)
        if (a[s1[i]-'a']++);
    for (int i=0; i<s2.size(); i++){
        if (a[s2[i]-'a']>0){
            a[s2[i]-'a']--;
            ++cnt;
        }
    }
    return max(s1.size(),s2.size())-cnt;
}

int main()
{
    int t; cin>>t;
    while (t--){
        string s1, s2; cin >> s1 >> s2;
        cout << out(s1,s2) << endl;
    }
}
