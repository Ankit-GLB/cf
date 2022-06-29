#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	vector<int>a(n);
	ll s=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
	}
	if(s==n)cout << 0;
	else if(s<n) cout << 1;
	else if(s>n) cout << s-n;
	cout << endl;
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