// 3. Longest Substring Without Repeating Characters
// Given a string s, find the length of the longest substring without duplicate characters.
//  Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.

#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s){
    int l = 0;
    int r = 0;
    int maxlen = 0;
    unordered_map<char, int> mp;
    while(r<s.length())
    {
        if(mp.find(s[r])!=mp.end())
        {
            l = mp[s[r]] + 1;
        }

        int len = r-l+1;
        maxlen = max(maxlen, len);
        mp[s[r]] = r;
        r++;

    }
    return maxlen;

}