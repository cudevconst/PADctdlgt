#include <bits/stdc++.h>
using namespace std;
vector <string> num;
vector <string> str;
int n;
void perNum ()
{
    string s;
    for (int i=0; i<n; i++)
        s += "1";
    num.push_back(s);
    for (int i=s.size()-1; i>=0; i--){
        if (s[i] < (char)(n+'0')){
            s[i] += 1;
            for (int j=i+1; j<s.size(); j++)
                s[j] = '1';
            i = n;
            num.push_back(s);
        }
    }
}

void perString (string s, int l, int r)
{
    if (l == r)
        str.push_back(s);
    else
        for (int i=l; i<=r; i++){
            swap (s[i], s[l]);
            perString(s, l+1, r);
        }
}


void out ()
{
    for (int i=0; i<str.size(); i++)
        for (int j=0; j<num.size(); j++)
            cout << str[i] << num[j] << endl;
}

int main()
{
        cin>>n;
        num.clear(), str.clear();
        string s = "";
        for (int i=0; i<n; i++)
            s += (char)(i+'A');
        perString(s, 0, n-1);
        perNum();
        out ();
}
