#include <bits/stdc++.h>
using namespace std;
long m = 1000000007;
int main()
{
    int t; cin>>t;
    while (t--){
        long n; cin>>n;
        priority_queue <long, vector<long>, greater<long>> q;
        for (long i=0; i<n; i++){
            long a; cin>>a;
            q.push(a);
        }
        long total_cost = 0;
        while (q.size()>=2){
            long a = q.top(); q.pop();
            long b = q.top(); q.pop();
            q.push((a+b)%m);
            total_cost += (a+b)%m;
            total_cost %= m;
        }
        cout << total_cost << endl;
    }
}
