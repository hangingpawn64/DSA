#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0, high = arr.size();
        while(low<high){
            int mid = low + (high-low)/2;
            if(mid == 0){return 0;}
            if(mid == arr.size()-1){return arr.size()-1;}

            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {return mid;}

            if(arr[mid]>arr[mid-1]){low = mid;}
            else{high = mid;}
        }
        return low;
    }
};
    return 0;
}