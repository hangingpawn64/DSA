#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  int major = -1;
  int freq = 0;
    int majorityElement(vector<int>& arr) {
        
        if(arr.size() == 1){
            return arr[0];
        }
        
        map<int, int> mpp;
        for(int i = 0; i < arr.size(); i++){
            mpp[arr[i]]++;
        }
        for(auto it: mpp){
            if(it.second > arr.size()/2){
                major = it.first;
            }
        }
        return major;
    }
};