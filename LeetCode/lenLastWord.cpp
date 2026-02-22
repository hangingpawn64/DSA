#include<bits/stdc++.h>
using namespace std;

    int lengthOfLastWord(string s) {
        int len = 0;
        int lastIndex = s.size() - 1;

        if(s[lastIndex] == ' '){
            int i = lastIndex;
            while(s[i] == ' '){
                i--;
                if(i < 0){return;}
            }
            while(s[i] != ' '){
                len++;
                i--;
                if(i < 0){return;}
            }
            return len;
        }

        else{
            int i = lastIndex;
            while(s[i] != ' '){
                len++;
                i--;
                if(i < 0){return;}
            }
            return len;
        }
    }

int main(){
     cout<< lengthOfLastWord("a");
}