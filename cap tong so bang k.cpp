#include <iostream>
using namespace std;

void out (int a[], int n, int k)
{
    int cnt=0;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++)
            if (a[i]+a[j] == k)
                cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int n, k; cin>>n>>k;
        int a[n];
        for (int i=0; i<n; i++)
            cin>>a[i];
        out (a, n, k);

    }
    return 0;
}
