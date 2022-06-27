#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	vector<int>a(2*n);
	int e=0,o=0;
	for(int i=0;i<2*n;i++){
		cin>>a[i];
		if(a[i]%2==0)
			e++;
		else
			o++;
	}	
	if(o==e)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
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