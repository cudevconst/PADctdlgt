#include <iostream>
using namespace std;

void out (int a[], int n)
{
    int cnt0=0, cnt1=0, cnt2=0;
    for (int i=0; i<n; i++){
        if (a[i]==0)
            cnt0++;
        else if (a[i]==1)
            cnt1++;
        else
            cnt2++;
    }
    for (int i=1; i<=cnt0; i++)
        cout << 0 << " ";
    for (int i=1; i<=cnt1; i++)
        cout << 1 << " ";
    for (int i=1; i<=cnt2; i++)
        cout << 2 << " ";
    cout << endl;
}

int main ()
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
