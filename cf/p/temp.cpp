#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin>>n;
	string a;
	cin>>a;
	string b;
	cin>>b;
	string c =b;
	reverse(c.begin(), c.end());
	int s=0;
	// int l;
	if(a.length()==1){
		cout <<"NO" << endl;
	}
	else if(a==b){
		cout << "NO" << endl;
	}
	else if(a==c){
		cout << "YES" << endl;
	}
	else{
		for(int i=a.length()-1;i>0;i--){
			if(a[i]!=b[i]){
				if(a[i-1] != b[i-1]){
					if((a[i]==b[i-1]=='c' &&a[i-1]==b[i]=='a')||(a[i]==b[i-1]=='a' &&a[i-1]==b[i]=='c')){
						s++;
					}
				}
			}
			// else if(a[i] == b[i]){
			// 	// do nothing
			// }
			// l = i;
		}
		// if(l!=0){
		// 	if((a[0]=='a' && b[1] =='c')||(a[0] == 'c' && b[1] == 'a')){
		// 				s++;
		// 			}
		// }
		if(s!=0){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}

	}		
}
int main(){
	// This is Klez's Template.
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}