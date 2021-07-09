#include <iostream>
using namespace std;

long long out (long long n, long long k)
{
    long long F[94];
    F[1]= 1, F[2] = 1;
    for (long long i=3; i<=n; i++)
        F[i] = F[i-1] + F[i-2];
    while (true){
        if (n==1)
            return 0;
        if (n==2)
            return 1;
        if (F[n-2]<k){
            k -= F[n-2];
            n -= 1;
        }
        else
            n -= 2;
    }

}

int main()
{
    long long t; cin>>t;
    while (t--){
        long long n, k; cin>>n>>k;
        cout << out(n,k) << endl;
    }
}
