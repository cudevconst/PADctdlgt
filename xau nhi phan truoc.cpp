#include <iostream>
using namespace std;

void out (string s)
{
    int i = s.size()-1;
    while (s[i] == '0' && i>=0)
        i--;
    if (i<0){
        for (int j=0; j<s.size(); j++)
            cout << 1;
        cout << endl;
    }
    else{
        s[i] = '0';
        for (int j=i+1; j<s.size(); j++)
            s[j] = '1';
        cout << s << endl;
    }
}

int main()
{
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        out (s);
    }
}
