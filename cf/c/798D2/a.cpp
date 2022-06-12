#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,m,k;
	cin>>n>>m>>k;
	int s1=0,s2=0;
	string a;
	cin>>a;
	string b;
	cin>>b;
	string c;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	while(a.length()!=0 && b.length()!=0){
		if(b[0]<=a[0]){
			if(s2 < k){
				c.push_back(b[0]);
				reverse(b.begin(), b.end());
				b.pop_back();
				reverse(b.begin(), b.end());
				s2++;
				s1=0;
			}
			else if(s2 >= k){
				c.push_back(a[0]);
				reverse(a.begin(), a.end());
				a.pop_back();
				reverse(a.begin(), a.end());
				s2 = 0;
				s1++;
			}
		}
		else if(a[0]<b[0]){
			if(s1 < k){
				c.push_back(a[0]);
				reverse(a.begin(), a.end());
				a.pop_back();
				reverse(a.begin(), a.end());
				s1++;
				s2=0;
			}
			else if(s1 >= k){
				c.push_back(b[0]);
				reverse(b.begin(), b.end());
				b.pop_back();
				reverse(b.begin(), b.end());
				s1 = 0;
				s2++;
			}
		}
	}
	cout << c << endl;	
}
int main(){
	int t;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}