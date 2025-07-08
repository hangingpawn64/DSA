#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> countFrequencies(vector<int>& nums){ // nums is a vector not an integer

    map<int ,int> mpp;
    vector<pair<int, int>> v;
    for(int i=0; i < nums.size(); i++){
        mpp[nums[i]]++;
    }

    for(const auto& it: mpp){
        v.push_back(it);
    }
    return v;
    
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int p;
       cin>> p;
       nums.push_back(p);
    }
    vector<pair<int, int>> res = countFrequencies(nums);
    // cout<<"[";
    // for(const auto& it: res){
    // cout<<"["<<it.first<<", "<<it.second<<"],";
    // }
    // cout<<"]";

        for (auto it : res) {
        cout<<"["<<it.first<< ", "<<it.second<<"] ";
    }
    cout<<endl;
    return 0;
}