#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCnt = 0;
        int cnt = 0;
        for(auto it : nums){
            if(it == 1){
                cnt++;
                if(cnt > maxCnt){maxCnt = cnt;}
            }
            else{
                cnt = 0;
            }
        }
        return maxCnt;
    }
};
    return 0;
}