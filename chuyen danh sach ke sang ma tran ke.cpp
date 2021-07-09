#include <bits/stdc++.h>
using namespace std;



int main ()
{
    int n; cin >> n;
    bool a[n][n];
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            a[i][j] = 0;
    string s;
    cin.ignore();

    for (int i=0; i<n; i++){
        getline(cin, s);
        int num = 0, j = 0;
        while (j<=s.size()){
            if (s[j] >= '0' && s[j] <= '9')
                num = num*10 + (int)(s[j]-'0');
            else{
                //if (num)
                    a[i][num-1] = 1;
                num = 0;
            }
            j++;
        }

    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
