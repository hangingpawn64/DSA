#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
public:
        vector<int>res;
        bool check(int top,int btm, int left,int right){
            return (top > btm || left > right);
        }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // goRight();
        // top++;
        // goBottom();
        // right--;
        // goLeft();
        // bottom--;
        // goTop();

        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0, btm = m-1, left = 0, right = n-1;
        // vector<int> check(int top, int btm, int left, int right);
        while(1){
        if(check(top,btm,left,right)){
            return res;
        }
        for(int i=left; i<=right; i++){
            res.push_back(matrix[top][i]);
        }

        top++;

        if(check(top,btm,left,right)){
            return res;
        }
        for(int i=top; i<=btm; i++){
            res.push_back(matrix[i][right]);
        }

        right--;

        if(check(top,btm,left,right)){
            return res;
        }
        for(int i=right; i>=left; i--){
            res.push_back(matrix[btm][i]);
        }

        btm--;

        if(check(top,btm,left,right)){
            return res;
        }
        for(int i=btm; i>=top; i--){
            res.push_back(matrix[i][left]);
        }
        left++;
        }
    }
};
    return 0;
}