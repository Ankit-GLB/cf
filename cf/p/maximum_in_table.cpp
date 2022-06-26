#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

int main()
{	// This Is Klez's Template.
	// Policy Based Data Structures Are Also included.
    ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	cout.tie(NULL) ;
	int n;
    cin>>n;
 	vector<vector<int>>a(n,vector<int>(n,1));
 	for(int i=1;i<n;i++){
 		for(int j=1;j<n;j++){
 			a[i][j] = a[i-1][j] + a[i][j-1];
 		}
 	}
 	ll max=a[0][0];
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			if(a[i][j]>max){
 				max = a[i][j];
 			}
 		}
 	}
 	cout << max << "\n";
    return 0;
}