#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	vector<int>a(n);
	int s=0,t=-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==0 && t==-1){
			t = i;
			s++;
		}
	}
	if(s!=0){
		if(t%2==0)cout << "CHEFINA" << endl;
		else cout << "CHEF" << endl;
		return;
	}
	if(n%2==0){
		int m = *min_element(a.begin(), a.end());
	for(int i=0;i<n;i++){
		a[i] -= m;
	}
	int ans;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			ans = i;
			break;
		}
	}
	if(ans%2==0){
		cout << "CHEFINA" << endl;
	}	
	else{
		cout << "CHEF" << endl;
	}
	}
	else{
		if(n==1){
			if(a[0]%2==0){
				cout << "CHEFINA" << endl;
			}
			else{
				cout << "CHEF" << endl;
			}
			return;
		}
		int m = *min_element(a.begin(), a.end());
	for(int i=0;i<n;i++){
		a[i] -= m;
	}
	int ans;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			ans = i;
			break;
		}
	}
	if(ans%2==0){
		cout << "CHEF" << endl;
	}	
	else{
		cout << "CHEFINA" << endl;
	}
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