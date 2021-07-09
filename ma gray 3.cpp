#include <iostream>
using namespace std;
int main ()
{
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        cout << s[0];
        char bef;
        bef = s[0];
        for (int i=1; i<s.size(); i++){
            if (s[i]==bef)
                bef = '0';
            else
                bef = '1';
            cout << bef;
        }
        cout << endl;
    }
}
