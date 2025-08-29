#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int> &arr, int target) {
   int start = 0, end = arr.size()-1 ;
   int ans = arr.size();
   int mid = start + (end - start)/2;
   while(start<=end){
    if(arr[mid]>target){
        ans = mid;
        end = mid - 1;
    }
    else{
        start = mid + 1;
    }
    mid = start + (end - start)/2;
   }
   return ans;
}
int main() {
    vector<int> arr = {2, 3, 7, 10, 11, 11, 25};
    int target = 9;
  
    cout << upperBound(arr, target);
    return 0;
}