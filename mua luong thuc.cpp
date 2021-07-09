#include <iostream>
using namespace std;

int out (int n, int m, int s)
{
    if (n<m || (n-m)*6<m)
        return -1;
    for (int i=1; i<=s; i++)
        if (n*i>=s*m)
            return i;
}

int main ()
{
    int t; cin>>t;
    int n,m,s;
    while (t--){
        cin>>n>>s>>m;
        cout << out(n,m,s) << endl;
    }
}

// 6 30 2 : cần 60 lương thực, => cần 60/6 = 10 ngày mua
