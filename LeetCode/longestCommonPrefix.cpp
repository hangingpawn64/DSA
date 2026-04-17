#include<bits/stdc++.h>
using namespace std;

    // My Solution
    // string longestCommonPrefix(vector<string>& strs) {
    //     int smallest = INT_MAX;
    //     int iOfSmallest = 0;
    //     int cnt = 0;
    //     for(int i=0; i<strs.size(); i++){
    //         if(strs[i].size()<smallest){smallest = strs[i].size();
    //                                     iOfSmallest = i;}
    //     }
    //     for(int i=0; i<smallest;i++){
    //         bool should = true;
    //         for(int j=1; j<strs.size(); j++){
    //             if(strs[j][i] !=strs[j-1][i]){should = false; 
    //                                         break;}
    //         }
    //         if(should){cnt++;}
    //         else{break;}
    //     }
    //      string s = strs[iOfSmallest].substr(0,cnt);
    //      cout<<s<<" "<<iOfSmallest<<" "<<cnt<<" ";
    //     return strs[smallest];
    // }

    // Optimal Solution

        string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for(int i = 1; i < strs.size(); i++){
            while(strs[i].find(prefix) != 0){
                prefix.pop_back();
            }
        }

        return prefix;
    }
int main(){
    vector<string> strs1 = {"flower", "flow", "flight"};
    vector<string> strs2 = {"dog", "racecar", "cars"};
    vector<string> strs = {"cir", "car"};
    longestCommonPrefix(strs);
    
    return 0;
}