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
	string s = "HelloWorldsojao";
	vector<int>a = {1,2,3,4,5,6,7,0};
	a.erase(a.begin()+3);
	s.erase(s.begin()+5);
	cout << s << endl;
	for(auto x:a)
		cout << x << " ";

	// cout << "value: " << remove( S.begin(), S.end(), 'e');
    return 0;
}