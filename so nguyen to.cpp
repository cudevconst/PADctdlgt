#include <bits/stdc++.h>
using namespace std;
bool pr[200];
int len, a[200];
int s, p, n;
vector <int> res[200];
int len_res;

void CLEAR()
{
    for (int i=0; i<200; i++)
        res[i].clear();
    len = 0;
    len_res = 0;
}
void etho ()
{
    memset (pr, 1, sizeof(pr));
    pr[0] = 0, pr[1] = 0;
    for (int i=2; i*i<=200; i++){
        if (pr[i]){
            for (int j=i*i; j<=200; j+=i)
                pr[j] = 0;
        }
    }
}

void cnt ()
{
    len=0;
    for (int i=p+1; i<s; i++)
        if (pr[i])
            a[len++] = i;
}

void PUSH (vector <int> &v)
{
    for (int i=0; i<v.size(); i++)
        res[len_res].push_back(v[i]);
    len_res++;
}

void backtrack (int sum, int l, vector <int> &v)
{
    if (sum==s && v.size()==n)
        PUSH (v);

    for (int i=l; i<len; i++){
        if (sum + a[i] <= s){
            v.push_back(a[i]);
            backtrack(sum+a[i], i+1, v);
            v.pop_back();
        }
    }
}

int main()
{
    etho ();
    int t; cin>>t;
    while (t--){
        CLEAR();
        cin >> n >> p >> s;
        cnt ();
        vector <int> v;
        backtrack (0,0, v);
        cout << len_res << endl;
        for (int i=0; i<len_res; i++){
            for (int j=0; j<res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
    }
}
