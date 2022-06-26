#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

void solve() {
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int max = a[0][0];
    int x=0,y=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>max){
                max = a[i][j];
                x=i;
                y=j;
            }
        }
    }
    if(m==n==1){
        cout << 1 << endl;
        return;
    }
    if(n!=m){
        int t1 = max(m,n);
        int t2 = min(m,n);
        cout << t1*(t2+1) << endl;
    }
    else{
        if(x==(n-1) || y==(n-1)){
            cout << n*n << endl;
        }
        else{
            cout << (n-1)*(n-1) << endl;
        }
    }

}
int main(){
    // This is Klez's Template.
    // Policy Based Data Structures Are Also included.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    solve();
    }
    return 0;
}