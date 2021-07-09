#include <bits/stdc++.h>
using namespace std;

void out (string s)
{
    stack <string> st;
    for (int i=s.size()-1; i>=0; i--){
        if (s[i] >= '0' && s[i] <= '9'){
            int ten = 1, num = 0;
            while (s[i] >= '0' && s[i] <= '9'){
                num += (int)(s[i]-'0')*ten;
                ten *= 10;
                i--;
            }
            i++;
            string tmp = "";
            while (num--){
                tmp += st.top();
            }
            st.pop();
            st.push(tmp);
        }
        else if (s[i] != '['){
            string x = "";
            x = s[i];
            st.push(x);
        }
        else{
            string tmp = "";
            while (st.top() != "]"){
                tmp += st.top();
                st.pop();
            }
            st.pop();
            st.push(tmp);
        }
    }
    cout << st.top();
    st.pop();
    while (!st.empty()){
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        out (s);
    }
    return 0;
}
