#include <iostream>
using namespace std;

void out (int a[], int n, int k)
{
    int i=k;
    while (i>0 && a[i]==n-k+i)
        i--;
    if (i>0){
        a[i]++, i++;
        for (i; i<=k; i++)
            a[i] = a[i-1]+1;
    }
    else
        for (int j=1; j<=k; j++)
            a[j] = j;
    for (int j=1; j<=k; j++)
        cout << a[j] << " ";
    cout << endl;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for (int i=1; i<=k; i++)
            cin>>a[i];
        out (a, n, k);
    }
    return 0;
}
