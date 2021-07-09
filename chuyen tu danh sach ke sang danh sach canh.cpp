#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n; cin>>n;
        cin.ignore();
        vector <int> g[1000];
        string s;
        for (int i=1; i<=n; i++){
            getline(cin, s);
            int num=0, j=0;
            while (j<=s.size()){
                if (s[j]>='0' && s[j]<='9')
                    num = num*10 + (int)(s[j]-'0');
                else{
                    g[i].push_back(num);
                    num = 0;
                }
                j++;
            }
        }
        for (int i=1; i<=n; i++){
            for (int j=0; j<g[i].size(); j++){
                if (g[i][j] > i)
                    cout << i << " " << g[i][j] << endl;
            }
        }

    return 0;
}
