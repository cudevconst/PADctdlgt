#include <bits/stdc++.h>
using namespace std;

void out (long long n, long long i)
{
    long long a[n+1];
    a[1]=1, a[2]=1;
    for (long long j=3; j<=n; j++)
        a[j] = a[j-1]+a[j-2];
    while(true){
        if (n==1){
            cout << "A" << endl;
            return;
        }
        if (n==2){
            cout << "B" << endl;
            return;
        }
        if (i>a[n-2]){
            i -= a[n-2];
            n--;
        }
        else
            n-=2;
    }
}

int main()
{
    long long t; cin>>t;
    while (t--){
        long long n, i; cin>>n>>i;
        out (n, i);
    }
}
