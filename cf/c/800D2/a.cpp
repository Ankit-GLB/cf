#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int a ,b;
	cin>>a>>b;
	int m1 = min(a,b);
	int m = min(a,b);
	while(m--){
		cout << "10";
	}
	a -=m1;
	b -=m1;	
	if(a!=0){
		while(a--){
		cout << "0";
		}
	}
	else if(b!=0){
		while(b--){
		cout << "1";
		}
	}
	cout << "\n";
}
int main(){
	// This is Klez's Template.
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