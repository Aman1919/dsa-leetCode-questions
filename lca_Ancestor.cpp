#include <iostream>
using namespace std;

/* https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/submissions/913130715/ Lowest common ancestor a binary tree - In this question we have to return the lowest common ancestor of 2 node in a bst . we have this recursion and first check is  root if root is equal to given node  then return current root else find the search through left and right and find the if given nodes are present  then return the root else return which ever is present */

class Solution
{
public:
        TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
        {
                if (!root)
                        return root;
                if (root == p || root == q)
                        return root;
                // getting right and left if p and q are present seprately in left or right subtree
                TreeNode *left = lowestCommonAncestor(root->left, p, q);
                TreeNode *right = lowestCommonAncestor(root->right, p, q);

                if (right && left)
                        return root;
                // if both present in one subtree
                return left ? left : right;
        }
};