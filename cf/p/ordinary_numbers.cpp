#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	if(n<=9){
		cout << n << "\n";
	}	
	else{
		int n1=n,c=0,s=0;
		while(n1!=0){
			n1/=10;
			s+=pow(10,c);
			c++;
		}
		cout << 9*(c-1) + n/s << "\n";
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