// for finding maximum sum subarray

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,-1};

    // Kadane's Algo
    int sum = 0, max = INT_MIN; 
    for(int i=0; i<nums.size(); i++){
        if(sum>max){max=sum;}
        if(sum<0){sum=0;}
    }
    return 0;
}