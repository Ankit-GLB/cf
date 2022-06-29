#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	ll int a,b,n;
	cin>>a>>b>>n;
	if(a<b){
		ll temp = a;
		a=b;
		b = temp;
	}
	int i=0;
	while(1){
		if(a>n||b>n){
			break;
		}
		else{
			if(i%2==0){
				a+=b;
			}
			else{
				b+=a;
			}
			i++;
		}
	}
	cout << i << endl;

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