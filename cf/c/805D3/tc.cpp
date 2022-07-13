#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n,k;
	cin>>n>>k;
	vector<ll>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	// 	cout << "hello" << endl;
	// for(int i=0;i<n;i++){
	// 	cout << a[i] << " ";
	// }
	// cout << endl;
	while(k--){
		ll p,q;
		cin>>p>>q;
		int lp=0,s=0;
		while(a[lp]!=p && lp<n){
			lp++;
		}
		if(lp == n){
			cout << "NO" << endl;
		}
		else if(lp !=n){
			for(int i=lp+1;i<n;i++){
				if(a[i] == q){
					s++;
				}
			}
			if(s!=0)cout << "YES" << endl;
			else cout << "NO" << endl;
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