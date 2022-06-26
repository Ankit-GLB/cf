#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		a[i] = i+1;
	}
	int i=0,j=n-1;
	while(i<j){
		int temp;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
	if(i==j){
		int temp = a[i];
		a[i] = a[i+1];
		a[i+1] = temp; 
	}
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << "\n";
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