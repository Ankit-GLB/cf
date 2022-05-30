#include<bits/stdc++.h>

using namespace std;

void solve() {
	
}
int main(){
	string a;
	cout << "enter the string to process:" << endl;
	getline(cin, a);
	string b = "";
	string c;
	for(int i = 0 ; i<a.length() ; i++){
		if(a[i] == " "){
			a[i] = c;
		}
	}
	cout << a;

	return 0;
}