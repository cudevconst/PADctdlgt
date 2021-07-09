#include <iostream>
using namespace std;

void print (int a[], int n)
{
    for (int i=0; i<n; i++)
        cout << a[i];
    cout << endl;
}

void out (int a[], int n, int k)
{
    int cnt=0;
    for (int i=n-1; i>=0; i--){
        if (!a[i]){
            a[i] = 1;
            cnt++;
            int j=i+1;
            cnt = cnt + j - n;
            for (j; j<n; j++)
                a[j] = 0;
            if (cnt == k)
                print (a, n);
            i=n;
        }
    }
}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n, k; cin>>n>>k;
        int a[n]={0};
        out (a, n, k);
    }
}
