#include <bits/stdc++.h>
using namespace std;
string a[101];

string add (string a, string b)
{
    while (a.size() < b.size())
        a = "0" + a;
    while (b.size() < a.size())
        b = "0" + b;
    int carry = 0;
    string res = "";
    for (int i=a.size()-1; i>=0; i--){
        int num = (int)(a[i]-'0') + (int)(b[i]-'0') + carry;
        res = (char)(num%10 + '0') + res;
        carry = num/10;
    }
    if (carry > 0)
        res = (char)(carry + '0') + res;
    return res;
}

string multi (string a, string b)
{
    vector <int> res (a.size()+b.size(), 0);
    int carry = 0;
    int id1=0, id2=0;
    for (int i=a.size()-1; i>=0; i--){
        int num1 = (int)(a[i]-'0');
        id2 = 0;
        carry = 0;
        for (int j=b.size()-1; j>=0; j--){
            int num2 = (int)(b[j]-'0');
            int sum = num1*num2 + res[id1+id2] + carry;
            carry = sum/10;
            res[id1+id2] = sum%10;
            id2++;
        }
        if (carry > 0)
            res[id1+id2] += carry;
        id1++;
    }
    int len = res.size()-1;
    while (len>=0 && !res[len])
        len--;
    string ans = "";
    for (int i=len; i>=0; i--)
        ans += (char)(res[i]+'0');
    return ans;

}

void out (int n)
{
    a[0] = "1";
    a[1] = "1";
    for (int i=2; i<=n; i++){
        string tmp = "";
        for (int j=0; j<i; j++)
            tmp = add(tmp, multi(a[j], a[i-j-1]));
        a[i] = tmp;
    }
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin >> n;
        out (n);
        cout << a[n] << endl;
    }
}
