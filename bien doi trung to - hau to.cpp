#include <bits/stdc++.h>
using namespace std;

int Prioriti (char a)
{
    if (a == '^')
        return 3;
    if (a == '*' || a == '/')
        return 2;
    if (a == '+' || a == '-')
        return 1;
    return 0;
}

void out (string s)
{
    stack <char> st;
    string res = "";
    for (int i=0; i<s.size(); i++)
    {
        if (s[i]>='a' && s[i]<='z')
            res += s[i];
        else if (s[i]>='A' && s[i]<='Z')
            res += s[i];
        else if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            while (st.size() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (s[i]=='+' || s[i]=='-' || s[i]=='*'
                || s[i]=='/' || s[i]=='^')
        {
            while ( st.size() && Prioriti(st.top()) >= Prioriti(s[i]) )
            {
              //  cout << st.top() << " " ;
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }

    }
    while (st.size())
    {
        if (st.top() != '(')
            res += st.top();
        st.pop();
    }
    cout << res << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        out (s);
    }
}
