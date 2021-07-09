#include <iostream>
using  namespace std;

int out (int a[], int n, int k)
{
    int i=0, j=n-1;
    while (i<=j){
        int mid = (i+j)/2;
        if (a[mid] > k)
            j = mid-1;
        else if (a[mid] < k)
            i = mid+1;
        else
            return mid+1;
    }
    return -1;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n, k; cin>>n>>k;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        if (out(a,n,k)>0)
            cout << out(a,n,k) << endl;
        else
            cout << "NO" << endl;
    }
}
