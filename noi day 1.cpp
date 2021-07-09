#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long t; cin>>t;
    while (t--){
        long n; cin>>n;
        long in;
        priority_queue <long, vector<long>, greater<long>> pq; // ưu tiên từ bé đến lớn
        for (long i=0; i<n; i++){
            cin>>in;
            pq.push(in);
        }
        long total_cost=0;
        while (pq.size()>=2){ // luôn thừa 1 thằng ở cuối nên điền kiện >=2
            long a = pq.top(); //nhỏ đầu
            pq.pop();
            long b = pq.top(); //nhỏ đầu+1
            pq.pop();
            total_cost += a+b; // tổng tiền
            cout << total_cost << " ";
            pq.push(a+b);
        }
        cout << endl;
        cout << total_cost << endl;
    }
}
