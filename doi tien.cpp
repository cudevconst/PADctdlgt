#include <iostream>
using namespace std;
int a[10] = {1,2,5,10,20,50,100,200,500,1000};

int out (int n)
{
    int cnt=0;
    for (int i=9; i>=0; i--)
        while (n >= a[i]){
            n -= a[i];
            ++cnt;
        }
    return cnt;
}

int main ()
{
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        cout << out (n) << endl;
    }
}
