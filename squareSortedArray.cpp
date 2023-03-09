#include<iostream>

using namespace std;
/*
https://leetcode.com/problems/squares-of-a-sorted-array/submissions/911420345/
Squares of a sorted array - in this question we have to return the array with
squared element of the given array and in a sorted form . its a easy question so
 i tried to do this using recursion and iteration for moving in the array and
squaring its elements . then sorted the array

*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
square(nums,0);
sort(nums.begin(),nums.end());
return nums;
    }

void square(vector<int>& nums,int i){
    if(i==nums.size()){
        return;
    }

    nums[i]*=nums[i];
    square(nums,i+1);
}

};
