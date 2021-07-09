#include <iostream>
using namespace std;
int a[50], n, k;
void print ()
{
    for (int i=1; i<=k; i++)
        cout << a[i];
    cout << " ";
}

void out (int i)
{
    for (int j=a[i-1]+1; j<=n-k+i; j++){
        a[i] = j;
        if (i==k)
            print ();
        else
            out (i+1);
    }
}

int main ()
{
    int t; cin>>t;
    while (t--){
        cin >>n>>k;
        out (1);
        cout << endl;
    }
}
