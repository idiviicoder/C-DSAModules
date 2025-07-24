// Longest Subarray with Sum K
// (all positives)

#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int k) {
        // code here
        int left = 0;
        int right = 0;
        int sum = arr[0];
        int maxlen = 0;
        int n = arr.size();
        while(right<n)
        {
            while(left<=right && sum>k)
            {
                sum -= arr[left];
                left++;
            }
            if(sum==k)
            {
                maxlen = max(maxlen,right-left+1);
            }
            right++;
            if(right<n)
            {
                sum+=arr[right];
            }
        }
        return maxlen;
    }