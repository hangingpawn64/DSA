#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
public:
    vector<int> preSum(vector<int>& nums){
        int n = nums.size();
        vector<int>prefixSum(n);
        prefixSum[0] = nums[0];
        for(int i=0; i<n-1; i++){
        prefixSum[i+1] = prefixSum[i] + nums[i+1];
        }
        return prefixSum;
    }

    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefixSum = preSum(nums);
        vector<int>answer;

        for(int i=0; i<n; i++){
            int leftSum = prefixSum[i] - nums[i];
            int rightSum = prefixSum[n-1] -prefixSum[i];
            answer.push_back(abs(leftSum - rightSum));
        }

        return answer;
    }
};
    return 0;
}