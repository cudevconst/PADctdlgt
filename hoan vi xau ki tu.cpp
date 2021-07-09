#include <iostream>
using namespace std;

void out (string s, int l, int r)
{
    if (l==r)
        cout << s << " ";
    else{
        for (int i=l; i<=r; i++){
            swap (s[i], s[l]);
            out (s, l+1, r);
        }
    }
}

int main()
{
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        out (s, 0, s.size()-1);
        cout << endl;
    }
}
