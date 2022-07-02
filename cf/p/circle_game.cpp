#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	vector<int>a(n);
	vector<int>zro;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==0)zro.push_back(i);
	}
	if(zro.size()>0){
		if(zro[0]%2==0)cout << "Joe" << "\n";
		else cout << "Mike" << "\n";
		return;
	}
	if(n%2==1){
		cout << "Mike" << '\n';
	}
	else{
		int m=0;
		for(int i=1;i<n;i++){
			if(a[m]>a[i]){
				m = i;
			}
		}
		if(m%2==0){
			cout << "Joe" << "\n";
		}
		else{
			cout << "Mike" << "\n";
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