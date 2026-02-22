#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution{
    public:
        bool isSubsequence(string s, string t){
            int counter = 0;
            for (int i = 0; i < t.size(); i++){
                if(t[i] == s[counter]){counter++;}
            }
            if(counter >= s.size()){return true;}
            else{return false;}
        }
    };
    return 0;
}