#include <bits/stdc++.h>
using namespace std;

int out (int a[], int n, int idx)
{
    stack <int> st;
    for (int i=n-1; i>idx; i--)
        st.push(a[i]);
    int num = a[idx];
    while (st.size())
    {
        if (st.top() > num)
        {
            num = st.top();
            st.pop();
            break;
        }
        st.pop();
    }
    if (!st.size())
        return -1;
    while (st.size())
    {
        if (st.top() < num)
            return st.top();
        st.pop();
    }
    return -1;
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        for (int i=0; i<n; i++)
            cin >> a[i];
        for (int i=0; i<n; i++)
            cout << out (a, n, i) << " ";
        cout << endl;
    }
}
