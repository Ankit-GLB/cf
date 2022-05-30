#include<bits/stdc++.h>

using namespace std;

void solve() {
   long long n;
   cin>>n;
   vector<long long >a(n);
   for(long long i=0;i<n;i++){
      cin>>a[i];
   }
   long long s=0;
   for(long long i=0;i<n-1;i++){
      if(max(a[i],a[i+1])/min(a[i],a[i+1]) >2){
         long long a = max(a[i],a[i+1]);
         long long b = min(a[i],a[i+1]);
         while(a>b){
            a /=2;
            s++;
         }
      }
   }  
}
int main(){
   long long t;
   cin >> t;
   while(t--){
   solve();
   }
   return 0;
}