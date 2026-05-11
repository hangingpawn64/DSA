#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        for(auto it : nums){
            string s = to_string(it);
            for(auto it : s){
                v.push_back(it - '0');
            }
        }
        return v;
    }
};
    return 0;
}