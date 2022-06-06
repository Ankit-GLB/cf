/* ID: PLUS._.MINUSS
	TASK: test
	LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long n;
	cin>>n;
	// n%3==0;
	long long c0=0,c1=0,c2=0;
	vector<long long>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%3==0){
			c0++;
		}
		else if(a[i]%3==1){
			c1++;
		}
		else if(a[i]%3 == 2){
			c2++;
		}
	}
	n = n/3;
	vector<long long>x;
	x.push_back(c0);
	x.push_back(c1);
	x.push_back(c2);
	long long s=0;
	long long i=0;
	while(x[0] != x[1] || x[1] != x[2] || x[0] != x[2] ){
		if(x[i]>n){
				long long ext = x[i] - n;
				s += ext;
				x[i] = n;
				x[(i+1)%3] += ext;
			}
		i = (i+1)%3;
	}
	cout << s << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}