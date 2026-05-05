#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:
    char repeatedCharacter(string s) {
        set<char>st;
        for(int i=0; i<s.size();i++){
            if(st.find(s[i]) == st.end()){st.insert(s[i]);}
            else{return s[i];}
        }
        return 'x';
    }
};
    return 0;
}