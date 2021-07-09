#include<bits/stdc++.h>
using namespace std;

int FIND(int a[], int x, int n) {
	for(int i=0; i<n; ++i) {
		if(a[i]==x) return i;
	}
	return -1;
}

void out(int in[], int pre[], int n) {
	int root=FIND(in, pre[0], n);
	if(root!=0) out(in, pre+1, root);
	if(root!=n-1) out(in+root+1, pre+root+1, n-root-1);
	cout<< pre[0]<< " ";
}

int main() {
	int t, n;
	cin>> t;
	while(t--) {
		cin>> n;
		int in[1001], pre[1001];
		for(int i=0; i<n; i++)
            cin>> in[i];
		for(int i=0; i<n; i++) cin>> pre[i];
		out(in, pre, n);
		cout<< endl;
	}
}
