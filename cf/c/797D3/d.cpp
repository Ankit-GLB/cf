#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll int n,k;
	cin>>n>>k;
	string a;
	cin>>a;
	vector<string>x;
	vector<ll int>ans;
	for(ll int i=0;i<=n-k;i++){
		string temp = a.substr(i,i+k);
		ll int s= 0;
		for(ll int j = 0;j<temp.length();j++){
			if(temp[j] == 'W'){
				s++;
			}
		}
		ans.push_back(s);
	}
	cout << *min_element(ans.begin(), ans.end()) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}