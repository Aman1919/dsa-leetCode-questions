#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
            vector<int>a;
         sub(nums,ans,a,0);
        return ans;
    }
    void sub(vector<int>&nums,vector<vector<int>>&ans,vector<int>&a,int i){
        if(i==nums.size()){
            ans.push_back(a);
            return;
        }
        a.push_back(nums[i]);
        sub(nums,ans,a,i+1);
        a.pop_back();
        sub(nums, ans,a, i+1);
    }
};
