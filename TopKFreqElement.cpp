#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

class Solution
{
public:
        vector<int> topKFrequent(vector<int> &nums, int k)
        {
                priority_queue<pair<int, int>> pqm;
                unordered_map<int, int> mp;
                for (auto i : nums)
                {
                        mp[i]++;
                }
                vector<int> ans;
                for (auto i : mp)
                {
                        pqm.push(make_pair(i.second, i.first));

                        if (pqm.size() > (int)mp.size() - k)
                        {
                                ans.push_back(pqm.top().second);
                                pqm.pop();
                        }
                }

                return ans;
        }
};