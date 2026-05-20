#include<bits/stdc++.h>
using namespace std;


int main(){
class Solution {
    public:
    int findPeakElement(vector<int>& nums) {
        int low=0, high = nums.size();
        if(nums.size() == 1){return 0;}
        while(low<high){
            int mid = low + (high-low)/2;
            if(mid == 0 && nums[mid+1] < nums[mid]){return 0;}
            if(mid == nums.size()-1 && nums[mid] > nums[mid-1]){return nums.size()-1;}

            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) {return mid;}

            if(nums[mid]>nums[mid-1]){low = mid;}
            else{high = mid;}
        }
        return low;
    }
};
    return 0;
}