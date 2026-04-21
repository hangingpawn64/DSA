#include<bits/stdc++.h>
using namespace std;

    int bS(vector<int>& nums, int start, int end, int target){
        int low = start, high = end;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] == target){return mid;}
            else if(nums[mid]>target){high = mid-1;}
            else{low = mid+1;}
        } 
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();

        //getting smallest number
        int low = 0, high = n-1;
        while(low<high){
            int mid = (low+high)/2;
            if(nums[mid]>nums[high]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }

        int smallestIndex = low;

        if(target >= nums[smallestIndex] && target <= nums[n-1]){
            // BS on 0-> SMALLEST-1
            return bS(nums, smallestIndex, n-1, target);
        }

        else{
            // BE ON Smallest -> Last
            return bS(nums, 0, smallestIndex-1,target);
        }
        return 0;
    }


int main(){
    vector<int> nums = {3,1};
    cout<<search(nums, 0);
    return 0;
}