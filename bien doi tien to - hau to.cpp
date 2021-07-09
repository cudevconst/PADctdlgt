#include <bits/stdc++.h>
using namespace std;

void out (string s)
{
    stack <string> st;
    for (int i=s.size()-1; i>=0; i--){
        if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            string tmp = st.top();
            st.pop();
            tmp = tmp + st.top() + s[i];
            st.pop();
            st.push(tmp);
        }
        else{
            string x = "";
            x += s[i];
            st.push(x);
        }
    }
    while (!st.empty()){
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

int main()
{
    int t; cin>>t;
    cin.ignore();
    while (t--){
        string s; cin>>s;
        out (s);
    }
    return 0;
}
