#include <iostream>
using namespace std;
#define ll long long

ll out (string a, string b)
{
    ll num1 = 0, num2 = 0;
    ll x = 1;

    for (int i=a.size()-1; i>=0; i--){
        if (a[i] == '1')
            num1 += x;
        x *= 2;
    }
    x = 1;
    for (int i=b.size()-1; i>=0; i--){
        if (b[i] == '1')
            num2 += x;
        x *= 2;
    }
    return num1*num2;
}

int main()
{
    int t; cin>>t;
    while (t--){
        string a, b; cin >> a >> b;
        cout << out (a,b) << endl;
    }
}
