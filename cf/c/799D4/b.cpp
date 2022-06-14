#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin>>n;
	vector<int>a(n);
	set<int>x;
	multiset<int>y;
	int s = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		x.insert(a[i]);
		y.insert(a[i]);
	}
	if(n%2==0){
		for(auto i = x.begin();i != x.end();i++){
			if(y.count(*i)>1){
				s += y.count(*i);
			}	
		}
		if(n-s == 0){
			cout << 2 << endl;
		}
		else{
			cout << n-s << endl;
		}
	}
	else{
		for(auto i = x.begin();i != x.end();i++){
			s += (y.count(*i)/2)*2;
		}
		cout << n-s << endl;
	}
}
int main(){
	// This is Klez's Template.
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