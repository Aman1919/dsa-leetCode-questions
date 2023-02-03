#include <string.h>
#include <iostream>
#include <unordered_map>

using namespace std;

/* https://leetcode.com/problems/decode-the-message/submissions/890740443/ Decode the message in this question we have to decode a given message using given  key by aligning key with 26 lowercase english  alpabets  . I did this using unordered_map .
1. first map the key and lowercase letters
  if key is boy then  like this :-
  (b,a),(o,b),(y,c)...and so on.
2. then find message char in the map whichever one is his
partner adds that to the answer

*/

class Solution
{
public:
        string decodeMessage(string key, string message)
        {
                char c = 'a';
                int i = 0;
                string ans = "";
                unordered_map<char, char> mp;
                while (c <= 'z' && i < key.size())
                {
                        // mapping the lowercase letter and key letters
                        if (key[i] != ' ' && mp.find(key[i]) == mp.end())
                        {
                                mp[key[i]] = c;
                                c++;
                        }
                        i++;
                }

                for (int j = 0; j < message.size(); j++)
                {
                        // finding message char in map whichever is his partner adds it to the answer
                        if (message[j] == ' ')
                        {
                                ans += ' ';
                        }
                        else
                        {
                                ans += mp[message[j]];
                        }
                }
                return ans;
        }
};