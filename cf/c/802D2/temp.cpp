#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> findPermutations(int a[], int n){
	vector<vector<int>>temp;
    sort(a, a + n);
    vector<int>t;
    do {
    	for(int i=0;i<n;i++){
    		t.push_back(a[i]);
    	}
    	temp.push_back(t);
    } while (next_permutation(a, a + n));
    return temp;
}
int main(){	int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    vector<vector<int>>temp = findPermutations(a,n);
    vector<int>ans;
    for(int i=0;i<temp.size();i++){
    	int s=0;
    	for(int j=0;j<n-1;j++){
    		s+= *max_element(temp[i].begin(), temp[i].begin()+j) * *min_element(temp[i].begin()+j+1,temp[i].end());
    	}
    	s+= temp[i][n-1]*(*max_element(temp[i].begin(),temp[i].end())+1);
    	ans.push_back(s);
    }
    cout << *min_element(ans.begin(), ans.end()) << endl;
    return 0;
}