#include<bits/stdc++.h>
using namespace std;
// int mean(vector<int>a,int i,int j){
// 	long long s= 0;
// 	for(k=i;k<=j;k++){
// 		s+=a[k];
// 	}
// 	return s/a.size();
// }
// int equal(vector<int>){
// 	int s=0;
// 	for(int i=0;i<a.size()-1;i++){
// 		if(a[i] != a[i+1]){
// 			s++;
// 		}
// 	}
// 	if(s==0){
// 		return 1;
// 	}
// 	else{
// 		return -1;
// 	}
// }
void solve() {
	float n;
	cin>>n;
	double s=0;
	vector<int>a(n,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
	}
	int c=0;
	for(int i=0;i<n;i++){
		if(((s - a[i])/(n-1)) == a[i]){
			c++;
		}
	}
	if(c!=0){
		cout << "YES" << endl;
	}	
	else{
		cout << "NO" << endl;
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