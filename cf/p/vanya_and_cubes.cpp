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
 	ll p=0,c=0,k=1;
	while(p<n){
		p+=(k*(k+1))/2;
		if(p>n){
			break;
		}
		k++;
		c++;
	}   
	cout << c << "\n";
    return 0;
}