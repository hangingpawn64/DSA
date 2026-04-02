#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
public:
    char findTheDifference(string s, string t) {
        int hashS[26] = {0};
        int hashT[26] = {0};
        char res;
        if(s.size() < 1){return t[0];}
        for(int i=0; i<s.size(); i++){
            hashS[s[i] - 'a']++;
        }
        for(int i=0; i<t.size(); i++){
            hashT[t[i] - 'a']++;
        }
        for(int i=0; i<26; i++){
            if(hashT[i] != hashS[i]){
                res = i + 'a';
                break;}
        }
        return res;
    }
};
    return 0;
}