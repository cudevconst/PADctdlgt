#include <iostream>
using namespace std;

int out (int a[], int n, int x)
{
    int time=0;
    for (int i=0; i<n; i++){
        if (a[i]>x)
            break;
        if (a[i]==x)
            ++time;
    }
    return ( time>0 ? time:-1);
}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n, x; cin>>n>>x;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        cout << out (a,n,x) << endl;
    }
}
