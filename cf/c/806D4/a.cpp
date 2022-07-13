#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	string a;
	cin>>a;
	if(a[0] == 'y' || a[0] == 'Y'){
		if(a[1] == 'e' || a[1] == 'E'){
			if(a[2] == 's' || a[2] == 'S'){
				cout << "YES" << endl;
				return;
			}
		}
	}
	cout << "NO" << endl;
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