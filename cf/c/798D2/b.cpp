#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin>>n;
	if(n==1){
		int temp;
		cin>>temp;
		cout << -1 << "\n";
	}
	else{
	vector<int>a(n);
	vector<int>b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i] = a[i];
	}
	sort(b.begin(), b.end());
	vector<int>ans;
	int n1 =n-1,i=0,j=0;
	while(n1--){
		if(a[j]!=b[i]){
			ans.push_back(b[i]);
			reverse(b.begin(), b.end());
			b.pop_back();
			reverse(b.begin(), b.end());
			j++;
		}
		else if(a[j] == b[i]){
			swap(b[i],b[i+1]);
			ans.push_back(b[i]);
			reverse(b.begin(), b.end());
			b.pop_back();
			reverse(b.begin(), b.end());
			j++;
		}
	}
	if(b[i] == a[j]){
		ans.push_back(b[i]);
		swap(ans[n-1],ans[n-2]);
	}
	else if(b[i] != a[j]){
		ans.push_back(b[i]);
	}	
	for(int i=0;i<n;i++){
		cout << ans[i] << ' ';
	}
	cout << "\n";
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