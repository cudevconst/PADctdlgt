#include <bits/stdc++.h>
using namespace std;

void out (int numt, string num)
{
    int i = num.size()-2;
    while (num[i] >= num[i+1] && i>=0)
        i--;
    if (i == -1){
        cout << numt << " " <<  "BIGGEST" << endl;
        return;
    }
    int j = num.size()-1;
    while (num[i] >= num[j])
        j--;
    swap (num[i], num[j]);
    i++;
    j = num.size()-1;
    while (i<j){
        swap (num[i], num[j]);
        i++, j--;
    }
    cout << numt << " " << num << endl;
}

int main()
{
    int t; cin>>t;
    while (t--){
        int numt; cin>>numt;
        cin.ignore();
        string num; cin>>num;
        out (numt, num);
    }
}
