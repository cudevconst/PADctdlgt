#include <iostream>
using namespace std;

long out (long n)
{
    long f0=1, f1=1, f2=2;
    long f=0;
    if (n<2)
        return 1;
    if (n==2)
        return 2;
    for (long i=3; i<=n; i++){
        f = f0+f1+f2;
        f0 = f1;
        f1 = f2;
        f2 = f;
    }
    return f;
}

int main()
{
    long t; cin>>t;
    while (t--){
        long n; cin>>n;
        cout << out(n) << endl;
    }
}
