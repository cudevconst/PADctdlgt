#include <bits/stdc++.h>
using namespace std;

void out (int s)
{
    int cnt7 = s/7, cnt4 = 0;
    bool check = 0;
    while (cnt7>=0){
        int x = s - cnt7*7;
        if (x%4 == 0){
            check = 1;
            break;
        }
        cnt7--;
    }
    if (check){
        cnt4 = (s-7*cnt7)/4;
        while(cnt4--)
            cout << 4;
        while (cnt7--)
            cout << 7;
        cout << endl;
    }
    else
        cout << -1 << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        out (n);

    }
    return 0;
}
