#include<bits/stdc++.h>
using namespace std;

void solve() {
	int x;
	cin>>x;
	if(x%2==1){
		if(x==1){
			cout << 3 << endl;
		}
		else{
			cout << 1 << endl;
		}
	}
	else if(x%2==0){
		// perfect square
		if((x&(x-1))==0){
			cout << x+1 << endl;
		}
		// not a perfect square
		else{
			for(int i=0;i<=sqrt(x)+1;i++){
					long long temp = pow(2,i);
					if((x&temp) > 0){
					cout << temp << endl;
					break;
				}
			}
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