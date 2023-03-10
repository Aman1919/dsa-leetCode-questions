#include<iostream>
using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        int i=0;int j=s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;j--;
            }else{
                return palin(s,i+1,j)||palin(s,i,j-1);
            }
        }
return true;
    }

    bool palin(string s,int i,int j){
        while(i<j){
            if(s[i]==s[j]){
                i++;j--;
            }else{
                return false;
            }
        }
    return true;

        }
};
