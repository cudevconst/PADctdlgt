#include <bits/stdc++.h>
using namespace std;

int out (string s)
{
    stack <char> st;
    for (int i=0; i<s.size(); i++){
        if (s[i] == ')' && !st.empty()){
            if (st.top() == '(')
                st.pop();
            else
                st.push(s[i]);
        }
        else
            st.push(s[i]);
    }
    int close = 0, open = 0;
    while (!st.empty()){
        if (st.top() == ')')
            close++;
        else if (st.top() == '(')
            open++;
        st.pop();
    };
    return (close/2 + close%2 + open/2 + open%2);
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
