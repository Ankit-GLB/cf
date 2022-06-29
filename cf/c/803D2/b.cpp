#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n,m;
	cin>>n>>m;
	vector<ll>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	int s=0;
	for(int i=1;i<n-1;i++){
		if(a[i]>a[i-1]+a[i+1]){
			s++;
		}
	}
	if(m==1){
		cout << (n-1)/2 << endl;
	}
	else{
		cout << s << endl;
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