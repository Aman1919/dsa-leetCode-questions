#include <iostream>
#include <vector>

using namespace std;

/* https://leetcode.com/problems/merge-sorted-array/submissions/884272094/
in this question we have to merge 2 given array into sorted array , we can do this by using sorting or by declaring 2 variables and inserting element from the back which ever is greater
*/
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int k = m - 1;
        int j = n - 1;
        int i = m + n - 1; // size of the total array after merging
        if (m == 0)
        {
            nums1 = nums2;
        }
        if (n == 0)
        {
            return;
        }
        while (k >= 0 && j >= 0)
        {
            if (nums1[k] < nums2[j])
            { // adding element which ever is the greatest
                nums1[i--] = nums2[j];
                j--;
            }
            else
            {
                nums1[i--] = nums1[k];
                k--;
            }
        }
        while (j >= 0)
        { // if nums2 has element reamaning then insert them
            nums1[i--] = nums2[j];
            j--;
        }
    }
};