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
    int s=0;
    for(int l=1;l<=n/2;l++){
    	if((n-l)%l ==0){
    		s++;
    	}
    }	
    cout << s << "\n";
 	return 0;
}