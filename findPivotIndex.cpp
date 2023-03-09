#include <iostream>

using namespace std;

/**
#
https://leetcode.com/problems/find-pivot-index/submissions/911412962/
Find pivot index -
in this question we have to find index from which the sum of left and
right side of the array is same else return -1 . We can do this question first
by finding the total sum of the array then  start taking left sum and
checking if totalsum and left sum is equal then return the current index
and update then total sum by decrementing with the element .
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int rsum=0,lsum=0;
    for(int i=nums.size()-1;i>=0;i--){
        rsum+=nums[i];
    }

    for(int i=0;i<nums.size();i++){
        rsum-=nums[i];
        if(rsum==lsum)return i;
   lsum+=nums[i];
    }
        return -1;
    }
};
