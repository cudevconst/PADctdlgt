#include <iostream>
using namespace std;
long long m = 1000000007;
long long findk(long long n)
{
    long long k=0;
    while (n>=1){
        k = k*10 + n%10;
        n/=10;
    }
    return k;
}
long long out (long long n, long long k)
{
    if (k==0) return 1;
    if (k==1) return n%m;
    else if (k%2==0)
        return out (n*n%m, k/2);
    else
        return (n*out(n*n%m, k/2))%m;
}

int main ()
{
    long long t; cin>>t;
    while (t--){
        long long n, k; cin>>n;
        if (n<9)
            k=n;
        else
            k = findk(n);
        cout << out (n,k) << endl;
    }
}
