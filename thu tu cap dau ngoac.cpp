#include <bits/stdc++.h>
using namespace std;

void out(string s)
{
    stack <int> check;
    queue <int> res;
    int cnt = 1;
    for (int i=0; i<s.size(); i++){
        if (s[i] == '('){
            res.push(cnt);
            check.push(cnt++);
        }
        else if (s[i] == ')'){
            res.push(check.top());
            check.pop();
        }
    }
    while (!res.empty()){
        cout << res.front() << " ";
        res.pop();
    }
    cout << endl;

}

int main()
{
    int t; cin>>t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin,s);
        out (s);
    }
    return 0;
}
