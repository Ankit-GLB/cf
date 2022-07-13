#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	ll n;
	cin>>n;
	ll c=0;
	ll n1 =n;
	while(n1!=0){
		n1/=10;
		c++;
	}
	cout << n - (ll)pow(10,c-1) << endl;
	
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