#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int a,b,c;
	cin>>a>>b>>c;
	multiset<int>x;
	x.insert(a);
	x.insert(b);
	x.insert(c);
	if(a==b && b==c){
		cout << "1 1 1" << endl;
		return;
	}
	int m=max(a,max(b,c));
	if(m-a==0 && x.count(a)==1){
		cout << "0 ";
	}
	else{
		cout << m-a+1 << " ";
	}
	if(m-b==0 && x.count(b)==1){
		cout << "0 ";
	}
	else{
		cout << m-b+1 << " ";
	}
	if(m-c==0 && x.count(c)==1){
		cout << "0" << endl;
	}
	else{
		cout << m-c+1 << endl;
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