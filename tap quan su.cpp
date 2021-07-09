#include <iostream>
using namespace std;

int out (int a[], int n, int k)
{
    int afake[k];
    for (int i=0; i<k; i++)
        afake[i] = a[i];
    int i=k-1;
    while (a[i] >= n-k+i+1 && i>=0)
        i--;
    if (i<0)
        return k;
    a[i]++;

    for (++i; i<k; i++)
        a[i] = a[i-1]+1;
    int res = 0;
    for (int i=0; i<k; i++)
        for (int j=0; j<k; j++)
            if (afake[j] == a[i])
                ++res;
    return k-res;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n, k; cin>>n>>k;
        int a[k];
        for (int i=0; i<k; i++)
            cin>>a[i];
        cout << out (a,n,k) << endl;
    }
}
