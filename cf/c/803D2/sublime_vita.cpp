#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n,x;
	cin>>n>>x;
	vector<int>a(n+1);
	a[0] = 0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	int ans=0,i;
	for(int i=1;i<=n;i++){
		a[i] += a[i-1];
		if(a[i]>x){
			ans = i-1;
		}
	}
	while(a[1]<=x){
		for(i=1;i<=n;i++){
			if(a[i]>x){
				ans+=i-1;
				break;
			}
		}
		for(int j=1;j<=i;j++){
			a[j]+=j;
		}
	}
	cout << ans << "\n";
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