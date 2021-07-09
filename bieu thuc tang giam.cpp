#include <bits/stdc++.h>
using namespace std;

void Next (int a[], int n, int next[], char order)
{
    stack <int> st;
    for (int i=n-1; i>=0; i--)
    {
        while (!st.empty() && ((order == 'G') ? a[st.top()] <= a[i]:
                                            a[st.top()] >= a[i]))
            st.pop();

        if (!st.empty())
            next[i] = st.top();
        else
            next[i] = -1;
        st.push(i);
    }

}

void out (int a[], int n)
{
    int NG[n], NS[n]; // next greater && next smaller
    Next (a, n, NG, 'G');
    Next (a, n, NS, 'S');
    for (int i=0; i<n; i++)
    {
        if (NG[i] > -1 && NS[NG[i]] > -1)
            cout << a[NS[NG[i]]] << " ";
        else
            cout << -1 << " ";
    }
    cout << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for (int i=0; i<n; i++)
            cin >> a[i];
        out (a, n);
    }
    return 0;
}
