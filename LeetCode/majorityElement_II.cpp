#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ele1 = -1;
        int ele2 = 0;
        int cnt1 = 0, cnt2 = 0;
        vector<int> res;

        for(auto it : nums){
            if(cnt1 == 0 && it != ele2){
                ele1 = it;
                cnt1++;
            }
            else if(cnt2 == 0 && it != ele1){
                ele2 = it;
                cnt2++;
            }
            else if(it == ele1){cnt1++;}
            else if(it == ele2){cnt2++;}
            else{cnt1--; cnt2--;}
        }

        int freq = 0;
        for(auto it : nums){
            if(it == ele1){freq++;}
        }
        if(freq > n/3){res.push_back(ele1);}

        freq = 0;
        for(auto it : nums){
            if(it == ele2){freq++;}
        }
        if(freq > n/3){res.push_back(ele2);}

        return res;
    }

};
    return 0;
}