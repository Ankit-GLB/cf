#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	ll a,b;
	cin>>a>>b;
	int c1,c2;
	if(a%2==0){
		c1=0;
	}	
	else{
		c1=1;
	}
	if(b%2==0){
		c2=0;
	}	
	else{
		c2=1;
	}
	if(a==b){
		cout << "0\n";
	}
	else if(a<b){
		if(c2==1){
			if(c1==1){
				cout << "2\n";
			}
			else if(c1==0){
				cout << "1\n";
			}
		}
		if(c2==0){
			if(c1==1){
				cout << "1\n";
			}
			else if(c1==0){
				cout << "2\n";
			}
		}
	}
	else if(a>b){
		if(c2==1){
			if(c1==1){
				cout << "1\n";
			}
			else if(c1==0){
				cout << "2\n";
			}
		}
		if(c2==0){
			if(c1==1){
				cout << "2\n";
			}
			else if(c1==0){
				cout << "1\n";
			}
		}
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