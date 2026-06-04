#include<bits/stdc++.h>
using namespace std;

int main(){
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        for(int i=0; i<nums.size(); i++){
            ans.push_back(ans[i]);
        }
        return ans;
    }
};
    return 0;
}