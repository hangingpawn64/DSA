#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:
    bool isValid(string s) {
        stack<char>st;
        for(auto it: s){
            if(it == '(' || it == '[' || it == '{'){
                st.push(it);
            }
            else if(it == ')'){
                if(st.empty() || st.top()!='('){return false;}
                else{st.pop();}
            }
            else if(it == ']'){
                if(st.empty() || st.top()!='['){return false;}
                else{st.pop();}
            }
            else{
                if(st.empty() || st.top()!='{'){return false;}
                else{st.pop();}
            }
        }
        if(!st.empty()){return false;}
        return true;
    }
};
    return 0;
}