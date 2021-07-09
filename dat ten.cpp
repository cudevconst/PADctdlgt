#include <iostream>
using namespace std;
int n, k, a[20];

void show()
{
    for (int i=1; i<=k; i++)
        cout << (char)(a[i]-1+'A');
    cout << endl;
}

void out (int i)
{
    for (int j=a[i-1]+1; j<=n-k+i; j++){
        a[i] = j;
        if (i==k)
            show();
        else
            out (i+1);
    }
}

int main()
{
    int t; cin>>t;
    while (t--){
        cin >> n >> k;
        a[0] = 0;
        out (1);
    }
}
