#include<iostream>
#include<vector>
#include<unordered_map>
/*
https://leetcode.com/problems/3sum/submissions/885054948/
In this question we have return all the possible 3 number that can have sum 0 .  we can do this question by using 
unordered_map by first inserting elements in the map then check if the sum of the two elements is present and that it's index is 
greater than prevous elements index than insert it into ans array .
*/


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
int sum=0;
sort(nums.begin(),nums.end());
if(nums.size()<3||nums[0]>0){
  return {};
}
unordered_map<int,int>mp;
for(int i=0;i<nums.size();i++){
  mp[nums[i]]=i;
}
        for(int i=0;i<nums.size()-2;i++){
          if(nums[i]>0){
            break;
          }
          for(int j=i+1;j<nums.size()-1;j++){
           sum=nums[i]+nums[j];
           if(mp.count(-sum)&&mp[-sum]>j){
               ans.push_back({nums[i],nums[j],-sum});
               j=mp[nums[j]];
             
          }
          i=mp[nums[i]];
        }
        
        }
        return ans;
    }
};
