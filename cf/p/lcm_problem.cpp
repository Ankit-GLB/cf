#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	ll a,b;
	cin>>a>>b;
	if(b%a==0){
		cout << a << " " << b << "\n";
	}	
	else if(b%a!=0){
		if(b/a==1){
			cout << "-1 -1" << "\n";
		}
		else{
			cout << a << " " << 2*a << "\n";
		}
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