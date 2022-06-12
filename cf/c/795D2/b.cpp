#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin>>n;
	vector<int>a(n);
	vector<int>b(n);
	multiset<int>x;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i] = a[i];
		x.insert(a[i]);
	}
	int s=0,c=0;
	for(int i=0;i<n;i++){
		if(x.count(a[i])>1){
			s++;
		}
	}
	for(int i=0;i<n-1;i++){
		if(a[i] != a[i+1]){
			c++;
		}
	}
	if(s==n && c != 0){
		if(n%2==0){
			for(int i=0;i<n/2;i++){
				for(int j=n;j>n/2;j--){
					if(b[i] == b[j]){
						a[i] = j+ 1;
						a[j] = i + 1;
						break;
					}	
				}
			}
		}
		else{
			for(int i=0;i<n/2;i++){
				for(int j=n;j>n/2;j--){
					if(b[i] == b[j]){
						a[i] = j+ 1;
						a[j] = i + 1;
						break;
					}
				}
			}
		}
		for(auto x : a){
			cout << x << " ";
		}
		cout << '\n';
	}
	else if(s==n && c== 0){
		cout << n << ' ';
		for(int i=1;i<n;i++)
			cout << i << ' ';
		cout << endl;
	}
	else{
		cout << -1 << endl;
	}
	cout << "" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}