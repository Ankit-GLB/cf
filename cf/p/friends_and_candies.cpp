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
	for(int i=0;i<n;i++){
		if(a[i]){
			for(int j=0;j<n;j++){
				if(a[j]){
					
				}
				else continue;
			}
		}
		else continue;
	}
	if(s%n!=0){
		cout << -1 << endl;
		return;
	}
	int v = s/n,ans=0;
	for(int i=0;i<n;i++){
		if(a[i]>v)s++;
	}
	cout << ans << endl;
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