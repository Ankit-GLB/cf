#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	ll int n;
	cin>>n;
	vector<ll int>a(n);
	ll int s=0;
	for(ll int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
	}
	if(n==1){
		cout << "YES" << endl;
		return;
	}
	while(a[a.size()-1] == 0){
		a.pop_back();
	}
	set<ll int>x;
	for(ll int i=0;i<a.size();i++){
		if(a[i]<0){
			x.insert(-1*a[i]);
		}else{
			x.insert(a[i]);
		}
	}
	if(x.size()!=1 && a[a.size()-1]<0 && s==0){
		cout << "YES" << endl;
	}
	else{
		cout <<"NO" << endl;
	}
}
int main(){
	// This is Klez's Template.
	// Policy Based Data Structure Are Also included.
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