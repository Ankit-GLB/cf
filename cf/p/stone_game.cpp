#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	int l1,l2;
	int m=0,M =0;
	for(int i=0;i<n;i++){
		if(a[m]>a[i])m = i;
		if(a[M]<a[i])M = i;
	}
	int lend = max(m,M)+1;
	int rend = n-min(m,M)+1;
	int normal = min(m,M)+1+(n-max(m,M)+1);
	cout << min(lend,min(rend,normal))  << "\n";
}
int main(){
	// This is Klez's Template.
	// Policy Based Data Structures Are Also included.
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}