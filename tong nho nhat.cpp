#include <bits/stdc++.h>
using namespace std;

long out (int a[], int n)
{
    sort (a, a+n);
    long num1=0, num2=0;
    for (int i=0; i<n; i++)
        if (i%2==0)
            num1 = num1*10+a[i];
        else
            num2 = num2*10+a[i];
    return num1+num2;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        cout << out (a,n) << endl;
    }
}
