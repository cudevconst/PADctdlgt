#include <bits/stdc++.h>
using namespace std;

int out (string s)
{
    stack <char> st;
    bool check = 0;
    for (int i=0; i<s.size(); i++){
        check = 0;
        if (s[i] == ')'){
            char top = st.top();
            while (top != '('){
                if (top == '+' || top == '-' || top == '*' || top == '/')
                    check = 1;
                top = st.top(); st.pop();
            }
            if (!check)
                break;
        }
        else
            st.push(s[i]);
    }
    return (!check ? 1:0);
}

int main()
{
    int t; cin>>t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin,s);
        if (out(s))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
