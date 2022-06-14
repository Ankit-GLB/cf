#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	vector<int>a(4);
	int temp;
	cin>>temp;
	a[0] = temp;
	int s=0;
	for(int i=1;i<4;i++){
		cin>>a[i];
		if(a[i]>temp){s++;}
	}
	cout << s << endl;
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