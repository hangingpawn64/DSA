#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:
    int pivotInteger(int n) {
        int low=1;
        int high=n;

        while(low<=high){
            int mid = (low+high)/2;

            int sumL = (mid*(mid+1))/2;
            int total = ((n*(n+1))/2) + mid;

            if(2*sumL == total ){return mid;}
            else if(2*sumL < total){low = mid+1;}
            else{high = mid-1;}
        }
        return -1;
    }
};
    return 0;
}