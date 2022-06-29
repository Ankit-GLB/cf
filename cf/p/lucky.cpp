#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

void solve() {
	string a;
	cin>>a;
	int n = a.length();
	long long s=0,c=0;
	for(int i=0;i<n;i++){
		if(i<3)s+=a[i];
		else c+=a[i];
	}	
	if(s==c)cout << "YES" << endl;
	else cout << "NO" << endl;
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