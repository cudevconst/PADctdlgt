#include <iostream>
#include <queue>
using namespace std;


void out (queue <long long> &s, long long n)
{
    if (n==1){
        cout << "[" << s.front() << "]" << endl;
        return;
    }
    for (long long i=1; i<=n; i++){
        long long a = s.front();
        s.pop();
        if (i==1)
            cout << "[" << a << " ";
        else if (i==n)
            cout << a << "]";
        else
            cout << a << " ";
        s.push(a);
    }
    cout << endl;

    while (n--){
        long long a = s.front();
        s.pop();
        for (long long i=1; i<=n; i++){
            long long b=s.front();
            if (i==1 && n!=1)
                cout << "[" << a+b << " ";
            else if (i==n && n!=1 )
                cout << a+b << "]";
            else if (i==1 && n==1)
                cout << "[" << a+b << "]";
            else
                cout << a+b << " ";
            s.pop();
            s.push(a+b);
            a=b;
        }
        cout << endl;
    }
}

int main ()
{
    long long t; cin>>t;
    while (t--){
        long long n; cin>>n;
        long long in;
        queue <long long> s;
        for (long long i=0; i<n; i++){
            cin >> in;
            s.push(in);
        }
        out (s, n);
    }
    return 0;
}
