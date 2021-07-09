#include <bits/stdc++.h>
using namespace std;
int a[100], n, k, cnt;
vector <string> res;

bool check ()
{
    int cntk = 0, ans = 0;
    for (int i=0; i<n; i++){
        if (!a[i])
            ++cntk;
        else
            cntk = 0;
        ans = max (ans, cntk);
    }
    return (ans==k ? 1:0);
}

void PUSH ()
{
    string s = "";
    for (int i=0; i<n; i++)
        if (!a[i])
            s = s + "A";
        else
            s = s + "B";
    res.push_back (s);
    ++cnt;
}

void out ()
{
    for (int i=n-1; i>=0; i--){
        if (!a[i]){
            a[i] = 1;
            for (int j=i+1; j<n; j++)
                a[j] = 0;
            i = n;
            if (check())
                PUSH ();
        }
    }
}

int main()
{
    cin>>n>>k;
    memset (a, 0, sizeof(a));
    out ();
    cout << cnt << endl;
//    for (int i=0; i<cnt; i++)
//        cout << res[i] << endl;

}
