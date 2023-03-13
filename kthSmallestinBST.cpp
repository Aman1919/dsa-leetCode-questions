#include <iostream>
#include <vector>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
#

[https://leetcode.com/problems/kth-smallest-element-in-a-bst/submissions/914278675/](https://leetcode.com/problems/kth-smallest-element-in-a-bst/submissions/914278675/) kth smallest element in a bst - In this question we have to return the kth smallest kth element in a bst . we can do this question by recursion . first store the element of the bst in a array using inorder traversal so that will be in a sorted order ans return k -1 elements from the end .

*/
class Solution
{
public:
        int kthSmallest(TreeNode *root, int k)
        {
                vector<int> a;
                inorder(a, root);

                return a[k - 1];
        }
        void inorder(vector<int> &ans, TreeNode *root)
        {
                if (root == NULL)
                {
                        return;
                }
                inorder(ans, root->left);
                ans.push_back(root->val);
                inorder(ans, root->right);
        }
};