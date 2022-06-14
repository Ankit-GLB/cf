#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	vector<vector<char>>a;
	for(int i=0;i<8;i++){
		for(int j=0j<8;j++){
			char temp;
			cin>>temp;
			a.push_back(temp);
		}
	}
	int p1,p2;
	for(int i=0;i<8;i++){
		for(int j=1;j<n-1;j++){
			if(a[i-1] == '.' && a[i] == '#' && a[i+1] == '.'){
				p1 = i;
				p2= j;
			}
		}
	}
	cout << p1 << " " << p2 << endl;
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