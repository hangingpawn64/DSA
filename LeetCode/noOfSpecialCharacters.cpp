#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int numberOfSpecialChars(string word) {
        int lowerHash[26] = {0};
        int upperHash[26] = {0};

        for(char it : word){
            if(islower(it)){
                lowerHash[it - 'a']++;
            }
            else{
                upperHash[it - 'A']++;
            }
        }

        int cnt = 0;
        for(int i = 0; i<26; i++){
            if(lowerHash[i]>0 && upperHash[i]>0){
                cnt++;
            }
        }
        return cnt;
    }
};

int main(){
    
    return 0;
}