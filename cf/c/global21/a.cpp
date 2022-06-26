#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	long long n,m;
	cin>>n>>m;
	vector<long long>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		a[i] = a[i] | m;
	}
	sort(a.rbegin(),a.rend());
	cout << a[0] << "\n";
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