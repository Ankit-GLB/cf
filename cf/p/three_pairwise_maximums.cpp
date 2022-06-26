#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int x,y,z;
	cin>>x>>y>>z;
	if(x==y && y==z){
		cout << "YES" << "\n";
		cout << x << " " << y << " " << z << "\n";
	}	
	else if(x!=y && y!=z && x!=z){
		cout << "NO" << "\n";
	}
	else if(max(x,y) != max(y,z)){
		cout << "NO" << "\n";
	}
	else{
		int m = max(x,max(y,z));
		if((x==y && z==1)||(y==z && x==1)||(x==z && y==1)){
			cout << "YES" << "\n";
			cout << "1 1 " << m << " ";
			return;
		}
		cout << "YES" << "\n";
		cout << m << " " << m-1 << " " << m-2 << "\n";
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