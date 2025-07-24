// Longest subarry with sum = k
// Brute force approach

#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int k) {
    int maxlen = 0;
    int n = arr.size();
    for(int i = 0; i<n; i++)
    {
        int sum = 0;
        // int len = 0;
        for(int j = i; j<n; j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                maxlen = max(maxlen,j-i+1);
            }
        }
    }

    return maxlen;

}