#include <bits/stdc++.h>
using namespace std;

int calculate (int a, int b, char s)
{
    if (s == '+')
        return a+b;
    if (s == '-')
        return a-b;
    if (s == '*')
        return a*b;
    if (s == '/')
        return a/b;
}

int out (string s)
{
    stack <int> st;
    for (int i=0; i<s.size(); i++){
        if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            st.push( calculate(a,b,s[i]) );
        }
        else
            st.push( (int)(s[i]-'0') );
    }
    int res = st.top();
    return res;
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
