#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	vector<int>a(n);
	int e=0,o=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			e++;
		}
		else{
			o++;
		}
	}
	if(e>0 && o>0){
		cout << "YES" << "\n";
	}	
	else if(o==0 && e>0){
		cout << "NO" << "\n";
	}
	else if(e==0 && o>0){
		if(n%2==0){
			cout << "NO" << "\n";
		}
		else{
			cout << "YES" << "\n";
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