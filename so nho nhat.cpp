#include <iostream>
using namespace std;

void out (int s, int d)
{
    if (!s && d==1){
        cout << 0 << endl;
        return;
    }
    if (!s && d>1){
        cout << -1 << endl;
        return;
    }
    if (s > 9*d){
        cout << -1 << endl;
        return;
    }
    int res[d];
    res[0] = 1;
    s -= 1;
    for (int i=d-1; i>0; i--){
        if (s>=9){
            res[i] = 9;
            s -= 9;
        }
        else{
            res[i] = s;
            s = 0;
        }
    }
    res[0] += s;
    for (int i=0; i<d; i++)
        cout << res[i] << " ";
    cout << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int s, d; cin>>s>>d;
        out (s,d);
    }
}
