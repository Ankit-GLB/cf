#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

int main()
{	// This Is Klez's Template.
	// Policy Based Data Structures Are Also included.
	int n,s,x;
	cin>>n>>s>>x;
	p= 0;
	while((s+p*x)%n!=0){
		p++;
	}
	cout << P << endl;
	return 0;
}