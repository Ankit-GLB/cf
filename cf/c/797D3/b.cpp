#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;cin>>n;
	vector<int>a(n);
	vector<int>b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	set<int>x;
	if(n==1){
		if(a[0]>=b[0]){
			cout << "YES" << '\n';
		}
		else{
			cout << "NO" << '\n';
		}
	}
	else{
	for(int i=0;i<n;i++){
		if(b[i]!=0){
			int diff = a[i] - b[i];
			x.insert(diff);
		}
	}
	int temp;
	if(x.size()>1){
		cout << "NO" << '\n';
	}
	else if(x.size() == 1){
		for(int i=0;i<n;i++){
			if(b[i] != 0){
				temp = a[i]- b[i];
			}
		}
		int q=0;
		for(int i=0;i<n;i++){
			if(b[i] == 0 && temp<a[i]){
				q++;
			}
		}
		if(q!=0){
			cout << "NO" << '\n';
		}
		else{
			cout << "YES" << '\n';	
		}
	}
	else{
		cout << "NO" << '\n';
	}

	}
	}
int main(){
	int t;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}