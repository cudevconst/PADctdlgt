#include <iostream>
using namespace std;

void out (int a[], int n)
{
    int ans=0;
    for (int i=0; i<n; i++){
        int id=i;
        for (int j=i; j<n; j++)
            if (a[id] > a[j])
                id = j;
        if (id != i){
            swap (a[i], a[id]);
            ans++;
        }
    }
    cout << ans << endl;
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
