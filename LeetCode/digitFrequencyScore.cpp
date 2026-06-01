#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:
    int digitFrequencyScore(int n) {
        string N = to_string(n);
        int hash[10] = {0};
        for(char it : N){
            hash[it - '0']++;
        }

        int score = 0;
        for(int i = 0; i<10; i++){
            score += i * hash[i];
        }
        return score;
    }
};
    return 0;
}