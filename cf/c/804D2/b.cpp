#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n,m;
	cin>>n>>m;
	int a[3][m+1];
	for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				a[i][j] = 0;
			}	
		}
	a[1][1] = 1;
	a[2][2] = 1;
	for(int i=1;i<=2;i++){
		for(int j=3;j<=m;j++){
			a[i][j] = a[i][j-1];
			a[i][j+1] = a[i][j-2];
			j++;
		}
	}
	int i=1,j=2;
	for(int k=1;k<=n;k+=2){
		for(int p=1;p<=m;p++){
			cout << a[i][p] << " ";
		}
		cout << endl;
		for(int p=1;p<=m;p++){
			cout << a[j][p] << " ";
		}
		cout << endl;
		swap(i,j);
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