#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long n;
	cin>>n;
	vector<long long>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long s= 0;
	long long c = 0;
	for(int i=0;i<n;i++){
		s+=a[i];
		for(int j=0;j<n;j++){
			
		}
		if(*max_element(a.begin()+i,a.begin()+j)<s){
				c++;
			}
	}
	if(c!=0){
		cout << "NO" << endl;
	}	
	else{
		cout << "YES" << endl;
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