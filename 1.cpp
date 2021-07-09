#include <iostream>
using namespace std;

void out (int a[], int n, int k)
{
    int i = k;
    while (a[i] == n-k+i && i>0)
        i--;
    if (i > 0)
    {
        a[i] += 1;
        for (int j = i+1; j<=k; j++)
            a[j] = a[i]+j-i;
    }
    else
        for (int i=1; i<=k; i++)
            a[i] = i;
    for (int i=1; i<=k; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        int a[k];
        for (int i=1; i<=k; i++)
            cin >> a[i];
        out (a, n, k);
    }
    return 0;
}
