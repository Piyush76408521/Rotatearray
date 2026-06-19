#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  void rotatearray(vector<int>& nums,int k){
    int n=nums.size();
    k=k%n;
    reverse(nums,0,n-1);
    reverse(nums,0,k-1);
    reverse(nums,k,n-1);
  }
  private:
  void reverse(vector<int>& nums,int left,int right){
    while(left<right){
      int temp=nums[left];
      nums[left]=nums[right];
      nums[right]=temp;
      left++;
      right--;
    }
  }
};
int main(){
  Solution s;
  vector<int> nums={1,2,2,3,4,5,6,7,8,8};
  int k=5;
  s.rotatearray(nums,k);
  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
  }
  return 0;
}
