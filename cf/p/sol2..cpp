#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long n;
	cin>>n;
	if(n%3==0){
		long long b = n/3+1;
		long long a = n/3;
		long long c = n -(a+b);
		cout << a << " " << b << " " << c << endl;
	}	
	else{
		long long a = n/3 + 1;
		long long b = n/3 + 2;
		
		long long c = n - (a+b);
		if(c==0){
			a--;
			c++;
		}
		cout << a << " " << b << " " << c << '\n';
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