#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	string a,b;
	cin>>a>>b;
	int p = 0;
	vector<int>ans;
	for(int i=0;i<a.length();i++){
		if(a[i]==b[0]){
			p++;
			ans.push_back(i);
		}
	}
	if(p==0)cout <<"NO" <<endl;
	else{
		for(int i=0;i<ans.size();i++){
			if(ans[i]%2==0 && (a.length()-1-ans[i])%2==0){
				cout << "YES"<< endl;
				return;
			}
		}
		cout << "NO" << endl;
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