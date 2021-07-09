#include <iostream>
using namespace std;

int out (string s)
{
    if (s[0] == '0')
        return 0;
    int n = s.size();
    int res[n+1] = {0};
    res[0] = 1, res[1] = 1;
    for (int i=2; i<=n; i++){
        if (s[i-1] > '0')
            res[i] = res[i-1];
        if (s[i-2] == '1')
            res[i] += res[i-2];
        else if (s[i-2] == '2' && s[i-1] < '7')
            res[i] += res[i-2];
    }
    return res[n];
}

int main()
{
    int t; cin>>t;
    while (t--){
        string s; cin>>s;
        cout << out (s) << endl;
    }
}
