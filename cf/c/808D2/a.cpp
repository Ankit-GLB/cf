#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	vector<ll>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		if(a[i]!=0 && a[i]<a[i-1]){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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