#include <bits/stdc++.h>
using namespace std;

void out (int a[], int b[], int c[], int x, int y, int z)
{
    int i=0, j=0, k=0;
    vector <int> res;
    bool check = 0;
    while (i<x && j<y && k<z){
        int minVal = min (a[i], min(b[j], c[k]));
        if (a[i] == b[j] && a[i] == c[k]){
            res.push_back (a[i]);
            i++, j++, k++;
            check = 1;
        }
        else if (a[i] == minVal)
            i++;
        else if (b[j] == minVal)
            j++;
        else if (c[k] == minVal)
            k++;
    }
    if (res.size() == 0)
        cout << "NO" << endl;
    else
        for (int i=0; i<res.size(); i++)
            cout << res[i] << " ";
    cout << endl;

}

int main()
{
    int t; cin>>t;
    while (t--){
        int x, y, z;
        cin>> x >> y >> z;
        int a[x], b[y], c[z];
        for (int i=0; i<x; i++)
            cin >> a[i];
        for (int i=0; i<y; i++)
            cin >> b[i];
        for (int i=0; i<z; i++)
            cin >> c[i];
        out (a, b, c, x, y, z);
    }
}
