#include<bits/stdc++.h>
using namespace std;

void solve() {
	// a^3 + b^3 == n
	long long n;
	cin>>n;
	long long s=0;
	for(int i=1;i<=((long long)cbrt(n) + 1);i++){
		for(int j=1;j<=((long long)cbrt(n) + 1);j++){
			
		}
	}
	if(s!=0){
		cout << "YES" << '\n';
	}
	else{
		cout<<"NO"<<'\n';
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}