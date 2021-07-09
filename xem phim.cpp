#include <iostream>
using namespace std;

int out (int w[], int n, int c)
{
    int d[n+1][c+1];
    for (int i=0; i<=n; i++)
        d[i][0] = 0;
    for (int i=0; i<=c; i++)
        d[0][i] = 0;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=c; j++){
            if (w[i-1] > j)
                d[i][j] = d[i-1][j];
            else
                d[i][j] = max (d[i-1][j], d[i-1][j-w[i-1]] + w[i-1]);
        }
    return  d[n][c];
}

int main()
{
        int c, n; cin>>c>>n;
        int w[n];
        for (int i=0; i<n; i++)
            cin>>w[i];
        cout << out(w, n, c) << endl;
}
