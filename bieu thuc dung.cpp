#include <iostream>
using namespace std;

int out (string s)
{
    int res = 0;
    int cLeft = 0, cRight = 0, ibl = 0;
    for (int i=0; i<s.size(); i++){
        if (s[i] == '['){
            cLeft++;
            if (ibl > 0){
                res += ibl;
                ibl--;
            }
        }
        else{
            cRight++;
            ibl = (cRight - cLeft);
        }
    }
    return res;
}

int main()
{
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        cout << out (s) << endl;
    }
}
