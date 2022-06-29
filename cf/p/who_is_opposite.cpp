#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	ll a,b,c;
	cin>>a>>b>>c;
	int M = max(a,max(b,c));
	int n=2*abs(b-a);
	if(n<M){
		cout << -1 << endl;
		return;
	}
	int t = (c+n/2)%n;
	if(t==0){
		cout << n << endl;
	}
	else{
		cout << t << endl;
	}
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