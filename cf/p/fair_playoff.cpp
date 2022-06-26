#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	vector<int>x(4);
	for(int i=0;i<4;i++){
		cin>>x[i];
	}
	int a = max(x[0],x[1]);
	int b = max(x[2],x[3]);
	sort(x.rbegin(),x.rend());
	int c = x[0];
	int d = x[1];
	if((a==c && b==d) || (a==d && b==c)){
		cout << "YES" << "\n";
	}
	else{
		cout << "NO" << "\n";
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