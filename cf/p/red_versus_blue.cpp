#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n,r,b;
	cin>>n>>r>>b;
	// string a;
	// no of sections = b+1;
	// int s = b;
	// each section contains (int) r/(b+1) elements at max.
	// if for each section n<((int)r/(b+1)) then print R n times
	// if not then print r/(b+1) times and after that 
	// print B
	// while(s--){
	// 	if(n>=r/(b+1)){
	// 		int p = r/(b+1);
	// 		while(p--){
	// 			a.push_back('R');
	// 		}
	// 		n -=p;
	// 	}
	// 	else if(n<(r/(b+1))){
	// 		while(n--){
	// 			a.push_back('R');
	// 		}
	// 		n=0;
	// 	}
	// 	a.push_back('B');
	// }
	// while(n--){
	// 	a.push_back('R');
	// }
	// cout << a << endl;
	vector<string>a(b+1);
	int i=0;
	while(1){
		if(r!=0){
			a[i].push_back('R');
			i= (i+1)%(b+1);
			r--;
		}
		else{
			break;
		}
	}
	i=0;
	while(b--){
		a[i].push_back('B');
		i++;
	}
	string ans;
	for(int i=0;i<a.size();i++){
		ans += a[i];
	}
	cout << ans << endl;
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