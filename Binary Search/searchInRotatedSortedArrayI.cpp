#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target){
    int low = 0;
    int high = nums.size() - 1;
    int mid = low + (high - low) / 2;
    while(low<=high){
        if(nums[mid]==target)
        {
            return mid;
        }
        //check for left sorted
        if(nums[mid]>=nums[low])
        {
            if(nums[low]<=target && target<=nums[mid])
            {
                high = mid - 1; // eleminating the right part
            }
            else{
                low = mid + 1; // eleminating the left part
            }
        }
        else{ // if right sorted
            if(nums[mid]<=target && target<=nums[high])
            {
                low = mid + 1; //eliminatng the left part (unsorted)
            }
            else{
                high = mid - 1; // eleminating the right part
            }
        }

        mid = low + (high - low) / 2;
    }

    return -1;
}