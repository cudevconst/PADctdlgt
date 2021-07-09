#include <bits/stdc++.h>
using namespace std;
int k;
string s;
void out ()
{
    int i=0;
    while (i<s.size() && k>0){
        int id = i;
        char num = s[i];
        for (int j=s.size()-1; j>i; j--){
            if (s[j] > num){
                num = s[j];
                id = j;
            }
        }
        if (id!=i){
            swap (s[id], s[i]);
            k--;
        }
        i++;
    }
    cout << s << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        cin >> k;
        cin.ignore();
        cin >> s;
        out ();
    }
    return 0;
}
