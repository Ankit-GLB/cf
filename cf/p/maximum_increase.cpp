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
 	vector<int>a(n);
 	vector<int>ans;
 	for(int i=0;i<n;i++){
 		cin>>a[i];
 	}
 	int s=1;
 	for(int i=1;i<n;i++){
 		if(a[i]>a[i-1]){
 			s++;
 		}
 		else{
 			ans.push_back(s);
 			s=1;
 		}
 	}   
 	ans.push_back(s);
 	sort(ans.rbegin(), ans.rend());
 	cout <<ans[0];
 	// for(int i=0;i<n;i++){
 	// 	int s=1;
 	// 	int j=i+1;
 	// 	while(a[j]>a[j-1] && j<n){
 	// 		s++;
 	// 		j++;
 	// 	}
 	// 	ans.push_back(s);
 	// }
 	// cout << *max_element(ans.begin(), ans.end());
    return 0;
}