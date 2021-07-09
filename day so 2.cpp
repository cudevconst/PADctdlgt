#include <iostream>
using namespace std;

void out (int x[], int n)
{
    int a[n][n];
    for (int i=0; i<n; i++)
        a[0][i] = x[i];
    for (int i=1; i<n; i++)
        for (int j=0; j<n; j++)
            a[i][j] = 0;
    for (int i=1; i<n; i++)
        for (int j=0; j<n-i; j++)
            a[i][j] = a[i-1][j] + a[i-1][j+1];
    //print
    for (int i=n-1; i>=0; i--){
        for (int j=0; j<n-i; j++){
            if (j==0 && i==n-1)
                cout << "[" << a[i][j] << "]";
            else if (j==0)
                cout << "[" << a[i][j] << " ";
            else if (j==n-1-i)
                cout << a[i][j] << "]";
            else
                cout << a[i][j] << " ";
        }
        cout << " ";
    }
    cout << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        out (a, n);
    }
}
