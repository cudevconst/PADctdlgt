#include <bits/stdc++.h>
using namespace std;

int cal (int a, int b, char s)
{
    if (s=='+')
        return a+b;
    if (s=='-')
        return a-b;
    if (s=='*')
        return a*b;
    if (s=='/')
        return a/b;
}

int out (string s)
{
    stack <int> st;
    for (int i=s.size()-1; i>=0; i--){
        if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push( cal(a,b,s[i]) );
        }
        else
            st.push((int)(s[i]-'0'));
    }
    return st.top();
}

int main()
{
    int t; cin>>t;
    cin.ignore();
    while (t--){
        string s; cin>>s;
        cout << out(s) << endl;
    }
    return 0;
}
