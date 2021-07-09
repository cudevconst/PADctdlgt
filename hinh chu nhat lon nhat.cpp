#include <bits/stdc++.h>
using namespace std;
#define ll long long

void out (int h[], int n)
{
    stack <int> p;
    long long res = 0, curSize = 0;
    int i = 0;
    while (i<n){
        if (p.empty() || h[i] >= h[p.top()])
            p.push(i++);
        else{
            int top = p.top();
            p.pop();
            curSize = h[top] * (p.empty() ? i : i-p.top()-1);
            res = max (curSize, res);
        }
    }
    while (!p.empty()){
        int top = p.top();
        p.pop();
        curSize = h[top] * (p.empty() ? i : i-p.top()-1);
        res = max (curSize, res);
    }
    cout << res << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        out (a,n);
    }
}
