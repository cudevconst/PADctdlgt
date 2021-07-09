#include <bits/stdc++.h>
using namespace std;

int out (long a1[], long a2[], int n)
{
    int res;
    int i=0;
    while (true){
        if (a1[i] != a2[i])
            return i+1;
        i++;
    }
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        long a1[n];
        for (int i=0; i<n; i++)
            cin>>a1[i];
        long a2[n-1];
        for (int i=0; i<n-1; i++)
            cin>>a2[i];
        cout << out(a1, a2 ,n) << endl;
    }
}
