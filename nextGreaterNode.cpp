#include <iostream>
#include <stack>
#include <vector>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
        vector<int> nextLargerNodes(ListNode *head)
        {
                ListNode *temp = head;
                vector<int> ans;
                stack<int> s;
                while (temp != NULL)
                {
                        ListNode *temp2 = temp;

                        while (temp2 != NULL && temp2->val <= temp->val)
                        {
                                temp2 = temp2->next;
                        }
                        if (!s.empty())
                                s.pop();
                        (temp2 != NULL) ? s.push(temp2->val) : s.push(0);

                        ans.push_back(s.top());

                        temp = temp->next;
                }
                return ans;
        }
};