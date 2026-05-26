#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:

        bool isSelf(int x){
            int val = x;
            while(val > 0){
                int num = val%10;
                if(num == 0){return false;}
                if(x%num != 0){return false;}
                val = val/10;
            }
            return true;
        }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        while(left <= right){
            if(isSelf(left)){
                ans.push_back(left);
            }
            left++;
        }
        return ans;
    }
};
    return 0;
}