// 1903. Largest Odd Number in String

// You are given a string num, representing a large integer. 
// Return the largest-valued odd integer (as a string) that is 
// a non-empty substring of num, or an empty string "" if no odd integer exists.
// A substring is a contiguous sequence of characters within a string.

// Example 1:

// Input: num = "52"
// Output: "5"
// Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.

#include<bits/stdc.h>
using namespace std;
string largestOddNumber(string num) {
    for(int i = nums.length()-1; i>=0; i--)
    {
        if(nums[i] - '0' %c 2 != 0)
        {
            return nums.substr(0,i+1);
        }
    }
    return "";
}

// agar mai left se scan karna start karu mujhe jese hi koi
// odd number mil jaayega to mai starting se us number tak ki
// substring return kar dunga 