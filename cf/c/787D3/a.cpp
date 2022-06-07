#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long a,b,c,x,y;
	cin>>a>>b>>c>>x>>y;
	x -= a;
	y -= b;
	if(x>0){
		c -= x;
	}
	if(y>0){
		c -= y;
	}
	if(c>=0){
		cout << "YES" << '\n';
	}
	else{
		cout << "NO" << '\n';
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