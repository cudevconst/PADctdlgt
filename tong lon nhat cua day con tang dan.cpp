#include <iostream>
using namespace std;

int out (int a[], int n)
{
    int res[n];
    for (int i=0; i<n; i++)
        res[i] = a[i];
    int ans = a[0];
    for (int i=1; i<n; i++){
        for (int j=0; j<i; j++){
            if (a[j] < a[i] && res[i] < res[j]+a[i])
                res[i] = res[j]+a[i];
            //cout << res[i] << " ";
        }
       // cout << endl;

        ans = max (res[i], ans);
    }
    return ans;
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        for (int i=0; i<n; i++)
            cin >> a[i];
        cout << out (a, n) << endl;
    }
}
