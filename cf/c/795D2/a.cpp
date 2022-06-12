#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long n;
	cin>>n;
	long long e=0,o=0;
	vector<long long>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			o++;
		}
		else{
			e++;
		}
	}
	cout << min(e,o) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}