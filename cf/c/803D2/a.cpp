#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans;
	for(int i=0;i<n;i++){
		int s=0;
		for(int j=0;j<n;j++){
			if(i!=j){
				s = s^a[i];
			}
		}
		if(s==a[i]){
			ans = i;
		}
	}
	cout << a[ans] << "\n";
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