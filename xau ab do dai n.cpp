#include <iostream>
using namespace std;

void in (int a[], int n)
{
    for (int i=0; i<n; i++)
        if (a[i]==1)
            cout << "B";
        else
            cout << "A";
    cout << " ";
}


int main ()
{
    int T; cin>>T;
    while (T--){
        int n;
        cin>>n;
        int arr[n] = {0};
        in(arr, n);
        for (int i=n-1; i>=0; i--){
            if (arr[i]==0){
                arr[i] = 1;
                for (int j=i+1; j<n; j++)
                    arr[j] = 0;
            in (arr, n);
                i=n;
            }
        }
        cout

    }
}
