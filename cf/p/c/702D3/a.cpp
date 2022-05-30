#include<iostream>
using namespace std;

void solve() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int s=0;
	for(int i=0;i<n-1;i++){
		float p = a[i];
		float q = a[i+1];
		if(p>q && p/q>2){
			while(p>q && p/q>2){
				s++;
				p/=2;
			}
		}
		if(q>p && q/p>2){
			while(q>p && q/p>2){
				s++;
				q/=2;
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