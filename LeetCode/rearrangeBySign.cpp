#include<bits/stdc++.h>
using namespace std;

    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> negative;
        vector<int> positive;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0){
                negative.push_back(nums[i]);
            }
            else{positive.push_back(nums[i]);}
        }

        int k=0;

        for(int i=0;i<positive.size();i++){
            negative.insert(negative.begin()+k, positive[i]);
            k+=2;
        }
        return negative;
    }

int main(){
    vector<int> v = {3,1,-2,-5,2,-4};
    vector<int> res = rearrangeArray(v);

    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}