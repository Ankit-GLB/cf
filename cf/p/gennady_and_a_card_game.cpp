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
	string a;
	cin>>a;
	int s=0;
	vector<string>b;
	for(int i=0;i<5;i++){
		string temp;
		cin>>temp;
		b.push_back(temp);
		if(a[0] == temp[0])
			s++;
		else if(a[1] == temp[1])
			s++;
	}
	if(s>0)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
	return 0;
}