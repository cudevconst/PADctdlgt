#include <iostream>
using namespace std;

void out (int a[], int n)
{
    for (int i=0; i<n; i++){
        bool check = 1;
        for (int j=0; j<n-i-1; j++)
            if (a[j]>a[j+1])
            {
                swap (a[j], a[j+1]);
                check = 0;
            }
        if (check)
            break;
        else{
            cout << "Buoc " << i+1 << ": ";
            for (int h=0; h<n; h++)
                cout << a[h] << " ";
            cout << endl;
        }

    }
}

int main ()
{
    int n; cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
        cin>>a[i];
    out (a, n);
    return 0;
}
