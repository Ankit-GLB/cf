#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	string a;
	cin>>a;
	int x=0,y=0,z=0;
	for(int i=0;i<a.length();i++){
		if(a[i] == 'A')
			x++;
		else if(a[i] == 'B')
			y++;
		else if(a[i] == 'C')
			z++;
	}	
	if(y ==(x+z)){
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