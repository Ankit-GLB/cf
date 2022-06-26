#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n,m;
	cin>>n>>m;
	if(n%2==0){
		cout << m*(n/2) << "\n";
	}	
	else{
		if(m%2==0){
			cout << m*(n/2) + (m/2) << "\n";
		}
		else{
			cout << m*(n/2) + (m/2+1) << "\n";
		}
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