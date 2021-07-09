#include <iostream>
using namespace std;
long long M = 1000000007;
long long out (long long n, long long k)
{
    int a[n+1]={0};
    a[0]=1, a[1]=1, a[2]=2;
    for (int i=3; i<=n; i++){
        for (int j=1; j<=k; j++){
            if (j>i)
                break;
            a[i] = (a[i]+a[i-j])%M;
        }
    }
    return a[n];
}

int main ()
{
    long long t; cin>>t;
    while (t--){
        long long n, k; cin>>n>>k;
        cout << out(n,k) << endl;
        cout << endl;
    }
}
