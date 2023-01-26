#include<iostream>
#include<vector>

using namespace std;
/* https://leetcode.com/problems/sort-the-students-by-their-kth-score/submissions/885550779/ 
In this question we have to sort the given matrix by the  kth exam and we can do this by using sort .
*/

class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        sort(score.begin(),score.end(),[&](auto const &a,auto const &b){
         return a[k]>b[k];
        });
        return score;
    }
};
