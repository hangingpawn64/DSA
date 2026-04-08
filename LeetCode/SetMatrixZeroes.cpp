#include<bits/stdc++.h>
using namespace std;

    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        unordered_map<int, int> zeroI;
        unordered_map<int, int> zeroJ;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    zeroI[i] += 1;
                    zeroJ[j] += 1;
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(zeroI.find(i) != zeroI.end() || zeroJ.find(j) != zeroJ.end()){
                    matrix[i][j] = 0;
                }
            }
        }
    }

int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,0,7,8},{0,10,11,12},{13,14,15,0}};
    setZeroes(matrix);
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}