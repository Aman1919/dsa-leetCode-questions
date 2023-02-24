#include <vector>
#include <iostream>

using namespace std;
/*
https://leetcode.com/problems/3sum-closest/submissions/904076794/ 3Sum-closet  - In this question we have to return the closet sum we can get of three number of the target we can do this question first by sorting the array then moving in array and checking the sum with 2 loops if it is equal to target  then return the target else keep track of the absolute difference between the sum and target , sum of three numbers. we will move the 2nd loop from both sides
*/
class Solution
{
public:
        int threeSumClosest(vector<int> &nums, int target)
        {
                int i = 0, j = nums.size() - 1, k = 0;
                int n = INT_MAX;
                int d;
                int m;
                int sum = 0;
                int ans;
                sort(nums.begin(), nums.end());
                while (i < nums.size() - 1)
                {
                        k = i + 1;
                        j = nums.size() - 1;
                        while (k < j)
                        {
                                d = nums[i] + nums[j] + nums[k];

                                if (d - target == 0)
                                {
                                        return target;
                                }
                                if (n > abs(d - target))
                                {

                                        n = abs(d - target);
                                        ans = nums[k] + nums[i] + nums[j];
                                }
                                if (d < target)
                                {
                                        k++;
                                }
                                else if (d > target)
                                {
                                        j--;
                                }
                        }
                        i++;
                }

                return ans;
        }
};