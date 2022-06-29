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
	int a,b,c;
	cin>>a>>b>>c;
	if(a<=b && a<=c)cout << "YES";
	else cout << "NO";   
    return 0;
}