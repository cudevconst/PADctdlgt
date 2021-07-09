#include <bits/stdc++.h>
using namespace std;

bool CP (pair <long long, long long> &a,
         pair <long long, long long> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

void out (map <long long, long long> M)
{
    vector <pair<long long,long long>> V;
    map <long long, long long>::iterator it;
    for (auto& it:M)
        V.push_back(it);
    sort (V.begin(), V.end(), CP);
    for (auto& it:V)
        for (long long i=0; i<it.second; i++)
            cout << it.first << " ";
    cout << endl;
}

int main ()
{
    long long t; cin>>t;
    while (t--){
        long long n; cin>>n;
        map <long long, long long> M;
        long long in;
        for (long long i=0; i<n; i++){
            cin>>in;
            M[in]++;
        }
        out (M);
    }
}
