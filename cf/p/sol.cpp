#include<bits/stdc++.h>
using namespace std;
// sort a rotated sorted array
// 50,60,70,80,10,20,30

int main(){
	long long n;
	cin>>n;
	string a;
	for(int i=0;i<n;i++){
		long long temp;
		cin>>temp;
		a.push_back(temp);
	}		
	cout << a << endl;
	long long pivot;
	for(int i = 0;i<n-1;i++){
		if(a[i+1]>a[i]){
			pivot = i + 1;
		}
	}
	string b = a.substr(0,pivot - 1);
	string c = a.substr(pivot , a.length()-1);
	cout << c + b << endl;
	return 0;
}