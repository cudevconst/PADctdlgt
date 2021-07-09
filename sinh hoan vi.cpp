#include <iostream>
using namespace std;
int a[11], n;
bool used[11] = {0};
void print ()
{
    for (int i=1; i<=n; i++)
        cout << a[i];
    cout << " ";
}

void out (int i)
{
    for (int j=n; j>=1; j--){
        if (!used[j]){
            a[i] = j;
            used[j] = 1;
            if (i==n)
                print ();
            else
                out (i+1);
            used[j] = 0;
        }
    }
}

int main ()
{
    int t; cin>>t;
    while (t--)
    {
        cin>>n;
        out (1);
        cout << endl;
    }
}
