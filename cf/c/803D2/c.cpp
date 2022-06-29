#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	ll a[n];
	multiset<ll>x;
	for(int i=0;i<n;i++){
		cin>>a[i];
		x.insert(a[i]);
	}	
	vector<vector<ll>>ts;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
				ll s= a[i] + a[j];
				vector<ll>t;
				t.push_back(s);
				t.push_back(i);
				t.push_back(j);
				ts.push_back(t);
			}
		}
	}
	ll s=0;
	for(int k=0;k<n;k++){
		for(int i=0;i<ts.size();i++){
			if(k!=ts[i][1] && k!=ts[i][2]&&(x.count(a[k]+ts[i][0])>0)){
				s++;
				break;
			}
		}
	}
	if(s != n){
		cout << "NO" << "\n";
	}
	else{
		cout << "YES" << "\n";
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