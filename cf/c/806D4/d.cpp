#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
	int n;
	cin>>n;
	vector<string>a;
	unordered_set<string>x;
	for(int i=0;i<n;i++){
		string temp;
		cin>>temp;
		a.push_back(temp);
		x.insert(temp);
	}
	for(int i=0;i<n;i++){
		// for each element a[i] perform the query of brute force
		// to find all possible strigns whose sum is equal to the
		// given string, and check whether the sub-strings are 
		// present in the given set of strings or not. 
		// if present then print "1" else print "0"
		int s=0;
		for(int j=1;i<=a[i].length()-1;j++){
// a[i].substr(0,i) and a[i].substr(i+1,a[i].length()-1)
			string s1 = a[i].substr(0,j);
			string s2 = a[i].substr(j,a[i].length()-j);
			// 0 1 2 3 4 5
			// a b c d e f a[i].length() == 6
			if(x.count(s1)>0 && x.count(s2)>0){
				s++;
				cout << 1;
				break;
			}
		}
		if(s!=0)cout<<0; 
	}
	cout<<endl;
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