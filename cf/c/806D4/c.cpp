#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int p;
		cin>>p;
		string t;
		cin>>t;
		for(int j=0;j<p;j++){
			if(t[j] == 'D'){
				a[i] = (a[i] + 1)%10;
			}
			else{
				a[i]--;
				if(a[i] == -1){
					a[i] = 9;
				}
			}
		}
	}
	for(int i=0;i<nn;i++){
		cout << a[i] << " ";
	}
	cout << endl;
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