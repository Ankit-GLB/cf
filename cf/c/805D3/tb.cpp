#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	string a;
	cin>>a;
	int ans = 0;
	unordered_set<char>t;
	int i=0;
	while(i<=a.length()-1){
		if(t.size()==3){
			ans++;
			while(t.count(a[i])!=0){
				i++;
			}
			t.clear();
		}
		else{
			t.insert(a[i]);
			i++;
		}
	}
	if(t.size()==0){
		cout << ans << endl;
	}
	else{
		cout << ans+1 << endl;
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