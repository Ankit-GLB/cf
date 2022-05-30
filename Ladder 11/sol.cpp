#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll x,y,n;
	// 5 0 4
	cin>>x>>y>>n;
	if((n%x)>=y){
		cout << (n/x)*x + y<< endl;
	}
	else{
		cout << (n/x-1)*x + y<< endl;	
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}