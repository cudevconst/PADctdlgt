#include <iostream>
using namespace std;

void out (string s)
{
    int i = s.size() - 1;
    while (i>=0){
        if (s[i] == '1')
            s[i] = '0';
        else{
            s[i] = '1';
            break;
        }
        i--;
    }
    cout << s << endl;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        out (s);
    }
    return 0;
}
