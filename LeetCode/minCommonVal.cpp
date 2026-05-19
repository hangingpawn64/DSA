#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // set<int> st;
        // for(auto it : nums1){
        //     st.insert(it);
        // }
        // for(int i=0; i<nums2.size(); i++){
        //     if(st.find(nums2[i]) != st.end()){return nums2[i];}
        // }
        // return -1;
        int i=0, j=0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){return nums1[i];}
            else if(nums1[i]>nums2[j]){j++;}
            else{i++;}
        }
        return -1;
    }
};
    return 0;
}