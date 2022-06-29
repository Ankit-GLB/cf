#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	ll n;
	cin>>n;
	vector<ll>a;
	for(int i=0;i<=n/6+1;i++){
		for(int j=0;j<=j/4+1;j++){
			if(6*i + 4*j == n){
				a.push_back(i+j);
			}
		}
	}
	if(a.size()==0){
		cout<< -1 << "\n";
		return;
	}
	sort(a.begin(), a.end());
	cout << a[0] << " " << a[a.size()-1] << endl;
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