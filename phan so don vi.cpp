#include <iostream>
using namespace std;

void out (int p, int q)
{
    if (q%p == 0){
        cout << 1 << "/" << q/p;
        return;
    }
    int n = q/p + 1;
    cout << "1/" << n << " " << "+" << " ";
    out (p*n-q, q*n);
}

int main()
{
    int t; cin>>t;
    while (t--){
        int p, q; cin >> p >> q;
        out (p, q);
        cout << endl;
    }
}
