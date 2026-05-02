#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int wealth = 0;
        for(int i=0; i<m; i++){
            int curr = 0;
            for(int j=0; j<n; j++){
                curr += accounts[i][j];
            }
            if(curr>wealth){wealth = curr;}
        }
        return wealth;
    }
};
    return 0;
}