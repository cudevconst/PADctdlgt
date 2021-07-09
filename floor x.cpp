#include <iostream>
using namespace std;

long out (long a[], long n, long x)
{
    long l=0, r=n-1, mid=0;
    while (l<r){
        long mid = (l+r)/2;
        if (a[mid] > x)
            r = mid-1;
        else if (a[mid] < x)
            l = mid+1;
        else
            break;
    }
    if (a[mid]==x)
        return mid+1;
    if (mid==0 && a[mid]>x)
        return -1;
    if (a[mid]>x){
        while (a[mid]>x && mid>=0)
            mid--;
        return mid+1;
    }
    else{
        while (a[mid]<=x && mid<=n)
            mid++;
        return mid;
    }

}

int main()
{
    int t; cin>>t;
    while (t--){
        long n, x; cin>>n>>x;
        long a[n];
        for (long i=0; i<n; i++)
            cin>>a[i];
        cout << out (a,n,x) << endl;
    }
}
