#include<bits/stdc++.h>
using namespace std;

// MOORE'S VOTING ALGO USED TO FIND MAJORITY ELEMENT

int main(){
    class Solution {
    public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ele = -1;
        int cnt = 0;
        for(auto it : nums){
            if(cnt == 0){
                ele = it;
                cnt++;
            }
            else if(it == ele){cnt++;}
            else{cnt--;}
        }
        int freq = 0;
        for(auto it : nums){
            if(it == ele){freq++;}
        }

        if(freq > n/2){return ele;}
        return -1;
    }
};
    return 0;
}