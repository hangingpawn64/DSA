#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3};
    int i = 0;
    int lastNum = nums[nums.size()-1];
    if(nums.size()==1){
        return nums.size();
    }
    else{
    while(nums[i] <= nums[nums.size()-1]){
        if(nums[i] == nums[i+1]){
            nums.erase(nums.begin() + i);
        }
        if(nums[i] != nums[i+1]){
            i++;
        }
    }
    nums.push_back(lastNum);
    cout<<nums.size()<<endl;
    vector<int>::iterator it = nums.begin();
    for(auto it: nums){
        cout<<it<<" ";
    }
    return 0;
}
}