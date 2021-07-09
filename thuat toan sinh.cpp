#include <iostream>
using namespace std;

int check (int a[], int n)
{
    int i=0, j=n-1;
    while (i<j){
        if (a[i] != a[j])
            return 0;
        i++, j--;
    }
    return 1;
}

void print (int a[], int n)
{
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void out (int n)
{
    int a[n] = {0};
    print (a,n);
    for (int i=n-1; i>=0; i--){
        if (a[i]==0){
            a[i] = 1;
            for (int j=i+1; j<n; j++)
                a[j] = 0;
            i = n;
            if (check(a,n))
                print (a,n);
        }
    }
}

int main()
{
    int n; cin>>n;
    out (n);
}
