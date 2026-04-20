#include<bits/stdc++.h>
using namespace std;

    // My Solution O(N) worst case;
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>notFound = {-1,-1};
        if(nums.size()==0){return notFound;}
        int low = 0, high = nums.size()-1;
        int mid = (low+high)/2;
        while(low <= high){
            mid = (low+high)/2;
            if(nums[mid] == target){break;}
            else if(nums[mid]>target){high = mid-1;}
            else{low = mid+1;}
        }
        if(nums[mid]!=target){return notFound;}

        //searchRight
        int right = mid+1;
        while(right < nums.size() && nums[right]==nums[mid]){
            right++;
        }
        //searchLeft
        int left = mid-1;
        while(left >= 0 && nums[left]==nums[mid]){
            left--;
        }
        vector<int>res = {left+1,right-1};
        return res;
    }

    //Optimal Solution O(log N)

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>notFound = {-1,-1};
        if(nums.size()==0){return notFound;}

        int low = 0, high = nums.size()-1;
        int mid = (low+high)/2;

        int first = -1;
        int last = -1;
        while(low <= high){
            mid = (low+high)/2;
            if(nums[mid] == target){
                first = mid;
                high = mid-1; // this is the key thing to find first occurence;
            }
            else if(nums[mid]>target){high = mid-1;}
            else{low = mid+1;}
        }

        if(first == -1){return notFound;}

        low = 0;
        high = nums.size()-1;
        mid = (low+high)/2;
        while(low <= high){
            mid = (low+high)/2;
            if(nums[mid] == target){
                last = mid;
                low = mid+1;
            }
            else if(nums[mid]>target){high = mid-1;}
            else{low = mid+1;}
        }
        vector<int> res = {first,last};

        return res;
    }


int main(){
    
    return 0;
}