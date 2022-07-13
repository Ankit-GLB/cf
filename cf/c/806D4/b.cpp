#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	string a;
	cin>>a;
	set<char>t;
	for(int i=0;i<n;i++)t.insert(a[i]);
	cout << 2*t.size() + (n-t.size()) << endl;
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