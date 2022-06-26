
#include <bits/stdc++.h>
using namespace std;
void swap(int& x, int& y){
   int temp = x;
   x = y;
   y = temp;
}
void permutations(vector<vector<int> >& res,
vector<int> nums, int l, int h){
   if (l == h) {
      res.push_back(nums);
      return;
   }
   for (int i = l; i <= h; i++) {
      swap(nums[l], nums[i]);
      permutations(res, nums, l + 1, h);
      swap(nums[l], nums[i]);
   }
}
vector<vector<int> > permute(vector<int>& nums){
   vector<vector<int> > res;
   int x = nums.size() - 1;
   permutations(res, nums, 0, x);
   return res;
}
int main(){
   int n;
   cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++){
      cin>>a[i];
   }
   vector<vector<int> > temp = permute(a);
   vector<int>ans;
    for(int i=0;i<temp.size();i++){
      int s=0;
      for(int j=0;j<n-1;j++){
         s+= (*max_element(temp[i].begin(), temp[i].begin()+j)) * (*min_element(temp[i].begin()+j+1,temp[i].end()));
      }
      int p=0;
      sort(temp[i].begin(),temp[i].end());
      for(int k=n-1;k>0;k--){
         if(temp[i][k] - temp[i][k-1] != 1){
            p = a[k] - 1;
         }
      }
      s += p*temp[i][n-1];
      ans.push_back(s);
    }
    cout << *min_element(ans.begin(), ans.end()) << endl;

   return 0;
}