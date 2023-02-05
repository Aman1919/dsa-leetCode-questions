
/*
https://leetcode.com/problems/decompress-run-length-encoded-list/submissions/891928698/
Decompress Run length Encoded list - In this question we have to return a array which contains elements 
of val and of freq with given condition . We can do this question first by finding freq and val
then pushing freq elements of freq value to the array. 
*/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
          if(2*i+1>=nums.size())break;
        int freq=nums[2*i];
        int val=nums[2*i+1];
        int k=0;
        while(k<freq){
          ans.push_back(val);
          k++;
        }

        }
        return ans;
    }
};
