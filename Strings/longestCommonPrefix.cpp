// 14. Longest Common Prefix

// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"

// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    string ans = "";
    sort(strs.begin(), strs.end());
    for(int i = 0; i<min(strs[0].length(), strs[strs.size()-1].length()); i++)
    {
        if(strs[0][i]==strs[strs.length()-1][i])
        {
            ans.push_back(strs[0][i]);
        }
        else{
            break;
        }
    }
    return ans;
}