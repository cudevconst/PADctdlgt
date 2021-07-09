#include <bits/stdc++.h>
using namespace std;

void out (string s)
{
    stack <string> st;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            string tmp = "";
            tmp += s[i];
            st.push(tmp);
        }
        else
        {
            string tmp1 = st.top(); st.pop();
            string tmp2 = st.top(); st.pop();
            tmp2 = s[i] + tmp2 + tmp1;
            st.push(tmp2);
        }
    }
    cout << st.top() << endl;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        out (s);
    }
    return 0;
}
