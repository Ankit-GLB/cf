#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
ll cal(int i,j,m){
	return (i-1)*m+j;
}
void solve() {
	int n,m;
	cin>>n>>m;
	ll s=0;
	ll int i=1;
	ll int j=1;f
	while(i!=n || j!=m){
		if(i!=n || j!=m){
			if(cal(i+1,j,m)>cal(i,j+1,m)){
				s+=cal(i+1,j,m);
				i++;
			}
			else{
				s+=cal(i,j+1,m);
				j++;
			}
		}
		else if(i==n){
			s+=cal(n,j,m);
		}
		else if(j==m){
			s+=cal(i,m,m);
		}
	}
	cout << s << endl;
	// int s1=0,s2=0,s3=0,s4=0;
	// // s1
	// i = 1;
	// for(int j=1;j<=n;j++){
	// 	s1+=(i-1)*m+j;
	// }
	// // s2
	// j=n;
	// for(int i=1;i<=m;i++){
	// 	s2+=(i-1)*m+j;
	// }
	// //s3
	// j=1;
	// for(int i=1;i<=m;i++){
	// 	s3+=(i-1)*m+j;
	// }
	// //s4
	// i=m;
	// for(int j=1;j<=n;j++){
	// 	s4+=(i-1)*m+j;
	// }
	// cout << min((s1+s2),(s3+s4)) << endl;
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