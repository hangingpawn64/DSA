#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int low = 0, high = n-1;

        while(low<high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){return true;}
            if(nums[mid]==nums[high] && nums[mid]==nums[low]){
                low++;
                high--;
                continue;
            }
            if(nums[low]<=nums[mid]){
                if(nums[low]<= target && nums[mid]>= target){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else{
                if(nums[mid]<=target && target << nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return false;
    }
};
    return 0;
}