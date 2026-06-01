#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for(auto &it : bills){
            if(it == 5){
                five++;
            }
            else if(it == 10){
                ten++;
                if(five<=0){return false;}
                five--;
            }
            else{
                if(five<=0){return false;}
                if(ten>0){
                    ten--;
                    five--;    
                }
                else{
                    if(five < 3){return false;}
                    five -= 3;
                }
            }
        }
        return true;
    }
};

int main(){
    
    return 0;
}