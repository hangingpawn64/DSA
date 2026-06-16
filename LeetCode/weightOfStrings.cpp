#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";

        for(int i=0; i<words.size(); i++){
            string s = words[i];
            int weight = 0;
            for(auto it : s){
                weight += weights[it -'a'];
            }
            weight = weight % 26;
            ans.push_back((25 - weight) + 'a');
        }
        return ans;
    }
};
    return 0;
}