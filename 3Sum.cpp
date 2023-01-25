#include<iostream>
#include<vector>
#include<unordered_map>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      if(nums.size()<3||nums[0]>0){
  return {};
}
  unordered_map<int,int>mp;
        vector<vector<int>>ans;
for( int i=0;i<nums.size();i++){
mp[nums[i]]=i;
}



int sum=0;
        for(int i=0;i<nums.size()-2;i++){
          if(nums[i]>0){
            break;
          }
          for(int j=i+1;j<nums.size()-1;j++){
            
             sum=nums[i]+nums[j];
             if(mp.count(-sum)&&mp.find(-sum)->second>j){
               ans.push_back({nums[i],nums[j],-sum});
               j=mp.find(nums[j])->second;
             }
               i=mp.find(nums[i])->second;

          }
        }

        return ans;
    }
};
