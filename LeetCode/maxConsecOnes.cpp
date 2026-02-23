#include <bits/stdc++.h>
using namespace std;

int main()
{
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int highest = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]){
                highest++;
                if (highest > res){res = highest;}
            }
            else{
                if( highest > res){res = highest;}
                highest = 0;
            }
        }
        return res;
    }
};
    return 0;
}