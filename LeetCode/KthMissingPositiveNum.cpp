#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:
    int findKthPositive(vector<int>& arr, int k) {

        vector<int>missing;

        if(arr[0] > 0){
            int j=0;
            while(++j != arr[0] && missing.size() < k){
                missing.push_back(j);
            }
        }

        for(int i=1; i<arr.size(); i++){
            int j = arr[i-1] ;
            while(++j != arr[i] && missing.size() < k) { 
                missing.push_back(j);
            }
        }
        if(missing.size() < k){
            int j = arr[arr.size()-1];
            while(missing.size()< k){
                missing.push_back(++j);
            }
        }
        return missing[k-1];
    }
};
    return 0;
}