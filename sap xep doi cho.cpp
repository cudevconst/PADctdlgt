#include <iostream>
using namespace std;

void out (int a[], int n)
{
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++)
            if (a[i] > a[j])
                swap (a[i],a[j]);
        cout << "Buoc " << i+1 << ": ";
        for (int h=0; h<n; h++)
            cout << a[h] << " ";
        cout << endl;
    }
}

int main ()
{
    int n; cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
        cin>>a[i];
    out (a, n);
}
