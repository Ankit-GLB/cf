#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll int n;
	cin>>n;
	vector<ll int>a(n);
	vector<ll int>b(n);
	for(ll int i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll int i=0;i<n;i++){
		cin>>b[i];
	}
	vector<ll int>ans;
	ans.push_back(abs(a[0]-b[0]));
	for(ll int i=1;i<n;i++){
		if(a[i]>=b[i-1]){
			ans.push_back(abs(a[i]-b[i]));
		}
		else{
			ans.push_back(abs(b[i]-b[i-1]));
		}
	}
	for(ll int i=0;i<ans.size();i++){
		cout << ans[i] << " ";
	}
	cout << '\n';
}
int main(){
	int t;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}