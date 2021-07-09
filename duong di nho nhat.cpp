#include <iostream>
using namespace std;


int main()
{
    int t; cin>>t;
    while (t--){
        int n, m; cin>>n>>m;
        int a[n][m];
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                cin>>a[i][j];

        for (int i=1; i<n; i++)
            a[i][0] += a[i-1][0];
        for (int i=1; i<m; i++)
            a[0][i] += a[0][i-1];
        for (int i=1; i<n; i++){
            for (int j=1; j<m; j++){
                int x = a[i][j] + a[i-1][j];
                int y = a[i][j] + a[i][j-1];
                int z = a[i][j] + a[i-1][j-1];
                a[i][j] = min (x,min(y,z));
            }
        }
        cout << a[n-1][m-1] << endl;
    }
}
