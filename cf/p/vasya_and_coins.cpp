#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	ll a,b;
	cin>>a>>b;
	if(a==0 && b==0)cout << 1 << endl;
	else if(a==0 &&b!=0)cout << 1 << endl;
	else if(a!=0 && b==0)cout << a+1 << endl;
	else if(a!=0 && b!=0)cout << a+2*b+1 << endl;
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