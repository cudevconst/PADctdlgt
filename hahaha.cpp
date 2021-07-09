#include <iostream>
using namespace std;

void print (int bin[], int n)
{
    bool check = 0;
    for (int i=1; i<n; i++)
        if (bin[i-1] && bin[i]){
            check = 1;
            break;
        }
    if (check) return;
    for (int i=0; i<n; i++)
        if (bin[i])
            cout << "H";
        else
            cout << "A";
    cout << endl;
}

void out (int n)
{
    int bin[n] = {0};
    int cnt=0;
    for (int i=n-1; i>=0; i--){
        if (!bin[i]){
            bin[i] = 1;
            for (int j=i+1; j<n; j++)
                bin[j] = 0;
            i = n;
            if (bin[0] && !bin[n-1])
                print (bin, n);
        }
    }
}

int main()
{
    int t; cin >> t;
    while (t--){
        int n; cin>>n;
        out (n);
    }
}
