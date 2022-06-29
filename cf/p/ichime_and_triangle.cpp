#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	if(b==c){
		cout << b << " " << b << " " << b;
		cout << endl;
	}
	else{
		cout << b << " " << c << " " << c;
		cout << endl;
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