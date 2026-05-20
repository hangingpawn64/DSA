#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int>peaks;
        for(int i = 1; i<mountain.size()-1; i++){
            int left = mountain[i-1];
            int right = mountain[i+1];
            if(mountain[i] > left && mountain[i] > right){
                peaks.push_back(i);
            }
        }
        return peaks;
    }
};

int main(){
    
    return 0;
}