#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin>>n;
	vector<int>a(n);
	int no=0,ne=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			ne++;
		}
		else{
			no++;
		}
	}
	long long s =0;
	if(no>ne){
		s+=ne;
	}
	else if(ne == no){
		s += n/2;
	}
	else if(ne>no){
		sort(a.begin(), a.end());
		int k = 1;
		for(int i=0;i<n && k <=(ne-no);i++){
			if(a[i]%2==0){
				k++;
				while(a[i]%2!=1){
					a[i]/=2;
					s++;
				}
			}
		}
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