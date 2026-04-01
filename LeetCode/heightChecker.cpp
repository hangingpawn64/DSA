#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
public:
    
    int heightChecker(vector<int>& heights) {
        int length = heights.size();
        vector<int>hash(101,0);
        vector<int>sorted;

        for(int i=0; i<heights.size(); i++){
            hash[heights[i]] += 1;
        }

        for(int i=0; i<100; i++){
            while(hash[i]--){
                sorted.push_back(i);
            }
        }

        int cnt = 0;

        for(int i=0; i<heights.size(); i++){
            if(heights[i] != sorted[i]){cnt++;}
        }

        return cnt;
    }
};
    return 0;
}