#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:

    bool isPos(vector<int>& piles, int mid, int h){
        double  hReq = 0;
        for(int i=0; i<piles.size(); i++){
            hReq += ceil((double)piles[i]/mid);
        }
        if(hReq > h){return false;}
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = INT_MIN;

        //finding max pile
        for(int i=0; i<piles.size(); i++){
            if(piles[i]>high){high = piles[i];}
        }

        while(low<=high){
            int mid = low + (high-low)/2;
            if(isPos(piles,mid,h)){
                high = mid-1;
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