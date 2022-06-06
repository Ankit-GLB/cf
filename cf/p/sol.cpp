#include<bits/stdc++.h>
using namespace std;

void solve() {
	int x,y;
	cin>>x>>y;
	if(y==x){
		cout << 0 << endl;
	}
	else if(y>x){
		cout << y-x << endl;
	}
	else{
		if((x-y)%2==0){
			cout << (x-y)/2 << endl;
		}
		else{
			cout << (x-y+1)/2 + 1<< endl;
		}
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