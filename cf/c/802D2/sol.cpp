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
	int x,y;
	cin>>x>>y;
	int s=0;
	if(x==y){
		cout << s << endl;
	}
	else{
	while(x!=y){
		if(x%2==0){
			if(x>y){
				x/=2;
				s++;
			}
			else if(x<y){
				x*=2;
				s++;
			}
		}
		else if(x%2==1){
			if(y%x==0 && y/x==2){
				x*=2;
				s++;
			}
			else{
				x = 3*x + 1;
				s++;
			}
		}
	}
	cout << s << endl;
}
	return 0;
}