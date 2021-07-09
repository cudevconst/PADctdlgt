#include <iostream>
using namespace std;

void out (long k, string a, string b)
{
    while (a.size() < b.size())
        a = "0" + a;
    while (b.size() < a.size())
        b = "0" + b;
    int carry = 0;
    string res = "";
    for (int i=b.size()-1; i>=0; i--){
        int num = (int)(a[i]-'0') + (int)(b[i]-'0') + carry;
        res = (char)(num%k + '0') + res;
        carry = num/k;
    }
    if (carry > 0)
        res = (char)(carry+'0') + res;
    cout << res << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int k; cin >> k;
        string a, b; cin >> a >> b;
        out (k,a,b);
    }
}
