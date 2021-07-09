#include <bits/stdc++.h>
using namespace std;

void out (string s)
{
    stack <string> st;
    string tmp = "";
    for (int i=0; i<=s.size(); i++){
        if (s[i] == ' ' || s[i] == NULL){
            st.push(tmp);
            tmp = "";
            continue;
        }
        tmp += s[i];
    }
    while (!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    int t; cin>>t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin,s);

        out (s);


    }
}
