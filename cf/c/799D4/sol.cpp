#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	char a[8][8];
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>a[i][j];
		}
	}
	int p1,p2;
	for(int i=0;i<8;i++){
		for(int j=1;j<7;j++){
			if((a[i][j-1] == '#') && (a[i][j] == '.') && (a[i][j+1] == '#')){
				p1 = i+1;
				p2= j+1;
			}
		}
	}
	cout << p1-1<< " " << p2 << endl;
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