#include <bits/stdc++.h>
using namespace std;

int main()
{	// This Is Klez's Template.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,q;
    cin>>n>>q;
    vector<long long int>a(n);
    for(long long int i=0;i<n;i++){
    	cin>>a[i];
    }
    sort(a.rbegin(), a.rend());
    for(long long int i=1;i<n;i++){
    	a[i] = a[i] + a[i-1];
    }
    while(q--){
    	long long int x ,y;
    	cin>>x>>y;
    	if(x==y || y>x){
    		cout << a[x-1] << endl;
    	}
    	else{
    		y = x-y;
    		cout << a[x-1] - a[y-1] << endl;
	    }
    }
    return 0;
}