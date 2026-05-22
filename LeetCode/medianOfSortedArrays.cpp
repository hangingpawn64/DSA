#include<bits/stdc++.h>
using namespace std;

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sorted;
        int it1 = 0, it2 = 0;
        while(it1 < nums1.size() && it2 < nums2.size()){
            sorted.push_back(min(nums1[it1], nums2[it2]));
            if(nums1[it1] >= nums2[it2]){
                it2++;
            }
            else if(nums1[it1] < nums2[it2]){
                it1++;
            }
        }
        if(it1 >= nums1.size()){
            while(it2 < nums2.size()){
                sorted.push_back(nums2[it2]);
                it2++;
            }
        }
        else if(it2 >= nums2.size()){
            while(it1 < nums1.size()){
                sorted.push_back(nums1[it1]);
                it1++;
            }
        }

        cout<<"merged array is: ";
        for(auto it : sorted){
            cout<<it<<" ";
        }
        cout<<endl;
        if(sorted.size() % 2 == 1){
            return sorted[sorted.size()/2];
        }
        else{
            return ((double)sorted[sorted.size()/2] + sorted[(sorted.size()/2)-1])/2;
        }
    }

int main(){
    vector<int>nums1 = {1,2};
    vector<int> nums2 = {3,4};
    cout<<findMedianSortedArrays(nums1, nums2);
    return 0;
}