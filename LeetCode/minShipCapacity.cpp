#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
public:

        bool isPos(vector<int>& weights, int days, int mid){
            int dReq = 1;
            int cap = mid;
            for(int i=0; i<weights.size();i++){
                if(cap - weights[i] >= 0){
                    cap -= weights[i];
                }
                else{
                    cap = mid;
                    cap -= weights[i];
                    dReq++;
                }
            }
            if(dReq <= days){return true;}
            return false;
        }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while(low<high){
            int mid = low + (high-low)/2;
            if(isPos(weights, days, mid)){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
    return 0;
}