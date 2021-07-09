#include <iostream>
using namespace std;

void out (int a[], int n)
{
    int i=n-2;
    while (a[i]>a[i+1])
        i--;
    if (i>=0){
        int j=n-1;
        while (a[j]<=a[i])
            j--;
        swap (a[i], a[j]);
        i++;
        j=n-1;
        while (i<j){
            swap (a[i], a[j]);
            i++, j--;
        }
    }
    else{
        for (int i=0; i<n; i++)
            cout << i+1 << " ";
        cout << endl;
        return;
    }
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
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
    return 0;
}
