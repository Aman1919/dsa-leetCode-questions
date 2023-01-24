#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

/* https://leetcode.com/problems/two-sum/submissions/884244980/
 in this we have to return the index  of 2 elements  of the given array such that their sum is equal to the given target . we can do this question by unordered_map
*/
class Solution
{
public:
	vector<int> twoSum(vector<int> &nums, int target)
	{
		unordered_map<int, int> mp;
		vector<int> ans;
		for (int m = 0; m < nums.size(); m++)
		{ // inserting the array elements in the unordered_map
			mp[nums[m]] = m;
		}

		int t;
		for (int i = 0; i < nums.size(); i++)
		{
			t = target - nums[i];

			if (mp.find(t) != mp.end() && mp[t] != i)
			{
				// check the t is present in map then the indexes
				//  we have to add m[i]!=i bcz then it will add ith element 2 times
				ans.push_back(i);
				ans.push_back(mp[target - nums[i]]);
				break;
			}
		}
		return ans;
	}
};