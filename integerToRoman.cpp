#include <vector>
#include <iostream>

using namespace std;

/*
https://leetcode.com/problems/integer-to-roman/submissions/905283541/
In this question we have to return the roman number of
the given number . we can do this first by
storing the symbols with their number in an
array or map then move through the array and check
if the number is >= to the element values if
it is then add its symbol to ans and subtract the
value from number and return the ans ;
*/

class Solution {
public:
    string intToRoman(int num) {
        vector<int>value{
            1000,900,500,400,100,90,50,40,10,9,5,4,1
        };
        vector<string>symbol{
            "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"
        };
        string roman="";
        int n=num;
        for(int i=0;i<value.size();i++){
            while(n>=value[i]){
                roman+=symbol[i];
                n-=value[i];
            }
        }
        return roman;
    }
};
