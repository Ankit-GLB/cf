#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin>>n;
	int temp;
	cin>>temp;
	string a = to_string(temp);
	vector<string>x;
	// set of all substrings
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(abs(i-j)>1){
				x.push_back(a.substr(i,j));
			}
		}
	}
	for(int i=0;i<x.size();i++){
		cout << x[i] << endl;
	}
	// long long s=0;
	// for(int i=0;i<x.size();i++){
	// 	int l = x[i].length()-1;
	// 	while(l--){
	// 		for(int i=0;i<x[i].length()-1;i++){
	// 			if(x[i] == '0' && x[i+1] == '1'){
	// 				x[i].erase(i,1);
	// 				x[i+1] = '1';
	// 			}
	// 			else if(x[i] == '1' && x[i+1] == '0'){
	// 				x[i].erase(i,1);
	// 				x[i+1] = '0';
	// 			}
	// 		}
	// 	}
	// 	if(x[i].length() == 1){
	// 		s++;
	// 	}
	// }
	// cout << n + s << endl;
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