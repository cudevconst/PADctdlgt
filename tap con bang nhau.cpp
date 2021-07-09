#include <iostream>
using namespace std;

int out (int a[], int n)
{
    int sum = 0;
    for (int i=0; i<n; i++)
        sum += a[i];
    if (sum%2 != 0)
        return 0;
    int d[n+1][sum/2+1];
    for (int i=0; i<=n; i++)
        d[i][0] = 1;
    for (int i=1; i <= sum/2+1; i++)
        d[0][i] = 0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=sum/2+1; j++){
            if (a[i-1] > j)
                d[i][j] = d[i-1][j];
            else
                d[i][j] = max (d[i-1][j], d[i-1][j-a[i-1]]);
        }
    }
    for (int i=0; i<=n; i++){
        for (int j=0; j<=sum/2+1; j++)
            cout << d[i][j] << " ";
        cout << endl;
    }
    return d[n][sum/2+1];
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        if (out(a,n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
