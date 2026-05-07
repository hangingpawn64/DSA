#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:
    string convertToBase7(int num) {
        string s;
        bool isNeg = false;
        if(num<0){
            isNeg = true;
            num = -num;
            s.append("-");
        }

        else if(num == 0){return "0";}

        while(num > 0){
            s.append(to_string(num % 7));
            num = num/7;
        }

        if(!isNeg){
            reverse(s.begin(),s.end());
        }

        else{
            reverse(s.begin()+1, s.end());
        }
        return s;
    }
};
    return 0;
}