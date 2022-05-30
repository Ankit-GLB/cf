#include<bits/stdc++.h>

using namespace std;

void reverse(int *a,int*n){
	int * p = a;
	int * q = a + *n -1;
	for(int i = 1; i<=*n/2 ; i++){
		int temp;
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}	
}
int main(){
	int n;
	cout << "enter the size of array" << endl;
	cin >> n;
	int a[n];
	cout << "enter the elements:" << endl;
	for(int i = 0 ; i<n ;i++){
		cin >> a[i];
	}
	reverse(&a[0],&n);
	cout << "the reversed array is:" << endl;
	for(int i = 0 ; i<n ;i++){
		cout << a[i] << " ";
	}
	return 0;
}