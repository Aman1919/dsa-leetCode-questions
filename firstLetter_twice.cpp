#include <unordered_map>
#include <string>

using namespace std;

/*
https://leetcode.com/problems/first-letter-to-appear-twice/submissions/891227950/ - First Letter to appear in this question we have to return the character which comes twice in the given string . We can this by using unordered_map first we enter the character and count in the map . then check if the current comes more than one then return it.
*/

class Solution
{
public:
        char repeatedCharacter(string s)
        {
                unordered_map<char, int> mp;
                char a;
                for (int i = 0; i < s.size(); i++)
                {
                        if (mp.find(s[i]) != mp.end())
                        {
                                a = s[i];
                                break;
                        }
                        mp[s[i]]++;
                }

                return a;
        }
};