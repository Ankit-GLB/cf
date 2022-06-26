#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	ll int n;
	cin>>n;
	vector<long long>x;
	multiset<long long>b;
	for(ll int i=0;i<n;i++){
		long long temp;
		cin>>temp;
		x.push_back(temp);
		b.insert(temp);
	}
	if(b.count(0) == n){
		cout << 0 << "\n";
		return;
	}
	x.push_back(0);
	ll s = 0;
	int i;
	for(i=0;i<x.size();i++){
		if(x[i]!=0){
			s++;
			int j=i;
			while(x[j+1]!=0){
				j++;
			}
			i = j;
		}
	}
	if(s>=2){
		cout << 2 << endl;
	}
	else{
		cout << s << endl;
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