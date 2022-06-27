#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	vector<long long>a(n);
	vector<long long>ans;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	int i=0,j=n-1;
	while(i<=j){
		ans.push_back(a[i]);
		ans.push_back(a[j]);
		i++;
		j--;
		if(i==j){
			ans.push_back(a[i]);
		}
	}
	for(int i=0;i<n;i++){
		cout << ans[i] <<" ";
	}
	cout << "\n";
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