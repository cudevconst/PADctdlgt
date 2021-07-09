#include <bits/stdc++.h>
using namespace std;

void out (long long n, long long k)
{
    if (n==1){
        cout << 1 << endl;
        return;
    }
    long long len = pow(2,n)/2;
    while (n--){
        if (k==len){
            k = n+1;
            break;
        }
        if (k>len)
            k = len*2-k;
        len /= 2;
    }
    cout << k << endl;

                                // Anh cũng đang học ♥NPT
                                // Anh cũng đang học ♥NPT


}

int main()
{
    int t; cin>>t;
    while (t--){
        long long n, k;
        cin>>n>>k;
        out(n,k);
    }
}
