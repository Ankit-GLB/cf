#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n,m;
	cin>>n>>m;
	ll s = 0;
	vector<ll>a(n);
	for(ll i=0;i<n;i++){
		cin>>a[i];
		s += a[i];
	}
	if(s<=m){
		cout << 0 << endl;
	}	
	else{
		cout << s-m << endl;
	}
}
int main(){
	// This is Klez's Template.
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// everything in ll == long long
	ll t;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}