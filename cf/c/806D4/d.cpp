#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	vector<string>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	unordered_set<string>t;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			t.insert(a[i] + a[j]);
		}
	}
	for(int i=0;i<n;i++){
		if(t.count(a[i])!=0)cout << 1;
		else cout << 0;
	}
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