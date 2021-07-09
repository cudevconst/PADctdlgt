#include <iostream>
using namespace std;

void out (long a[], long n)
{
    long min1=a[0], min2=a[0];
    for (long i=0; i<n; i++){
        if (min1>a[i])
            min1 = a[i];
        if (min2<a[i])
            min2 = a[i];
    }
    for (long i=0; i<n; i++)
        if (min2>a[i] && a[i]!=min1)
            min2 = a[i];
    if (min2==min1)
        cout << -1 << endl;
    else
        cout << min1 <<  " " << min2 << endl;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        long n; cin>>n;
        long a[n];
        for (long i=0; i<n; i++)
            cin>>a[i];
         out(a,n);
    }
}
