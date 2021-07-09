#include <bits/stdc++.h>
using namespace std;

int mul3 (int a[], int n)
{
    int max1, max2, max3;
    int min1, min2;
    max1 = max2 = max3 = INT_MIN;
    min1 = min2 = INT_MAX;
    for (int i=0; i<n; i++){
        if (a[i] >= max3){
            max1 = max2;
            max2 = max3;
            max3 = a[i];
        }
        else if (a[i] >= max2){
            max1 = max2;
            max2 = a[i];
        }
        else if (a[i] >= max1)
            max1 = a[i];
        if (a[i] < min1){
            min2 = min1;
            min2 = a[i];
        }
        else if (a[i] < min2)
            min2 = a[i];
    }
//    cout << max1 << " " << max2 << " " << max3 << endl;
    return max (max1*max2*max3, min1*min2*max3);
}

int mul2 (int a[], int n)
{
    int max1, max2;
    int min1, min2;
    max1 = max2 = INT_MIN;
    min1 = min2 = INT_MAX;
    for (int i=0; i<n; i++){
        if (a[i] > max2){
            max1 = max2;
            max2 = a[i];
        }
        else if (a[i] > max2)
            max2 = a[i];
        if (a[i] < min1){
            min2 = min1;
            min1 = a[i];
        }
        if (a[i] < min2)
            min2 = a[i];
    }
    return max(max1*max2, min1*min2);

}

int main()
{
    int n; cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort (a, a+n);
    int max3 = a[n-1]*a[n-2]*a[n-3];
    int min3 = a[0]*a[1]*a[n-1];
    int max2 = a[n-1]*a[n-2];
    int min2 = a[0]*a[1];
    cout << max (max(max3,min3), max(max2,min2));
}

