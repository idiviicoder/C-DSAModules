#include<bits/stdc++.h>
using namespace std;

int findPeak(vector<int>& nums)
{
    int n = nums.size();
    if(n == 1)
    {
        return 0;
    }
    if(nums[0]>nums[1])
    {
        return 0;
    }
    if(nums[n-1]>nums[n-2])
    {
        return n-1;
    }

    int l = 1;
    int r = nums.size() - 2;
    int mid = l + (r-l)/2;

    while(l<=r){
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            return mid;
        }
        else if(nums[mid]>nums[mid-1]){ //peak is on the right
            l = mid + 1;
        }
        else{
            h = mid - 1; //peak is on the left
        }
        mid = l + (r-l)/2;
    }
    return -1;

}