#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n,s;
	cin>>n>>s;
	vector<int>a(n);
	long long v=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		v+=a[i];
	}
	if(v>=s){
		cout << 0 << endl;
	}
	else{
		int i=0,j=n-1,c=0,v1=0;
		while(v1<s && i<j){
			if(a[i]== 1 && a[j] == 0){
				i++;
				v1++;
				c++;
			}
			else if(a[i]== 0 && a[j] == 1){
				j--;
				v1++;
				c++;
			}
			else if(a[i]== 1 && a[j] == 1){
				j--;
				v1++;
				c++;
				if(v1<s){
					i++;
					v1++;
					c++;
				}
			}
			else if(a[i]== 0 && a[j] == 0){
				int c1=0,c2=0;
				int k1 = i,k2 = j;
				while(a[k1] != 1){
					k1++;
					c1++;
				}
				while(a[k2] != 1){
					k2--;
					c2++;
				}
				if(c1<c2){
					c += c1;
					v1++;
					i+=c1;
				}
				else if(c2<c1){
					c +=c2;
					v1++;
					j-=c2;
				}
				else if(c1==c2){
					v1++;
					i+=c1;
					c+=c1;
					if(v1<s){
						j-=c1;
						v1+=c1;
						c+=c1;
					}
				}
			}
		}
		cout << c << endl;
	}	
}
int main(){
	// This is Klez's Template.
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