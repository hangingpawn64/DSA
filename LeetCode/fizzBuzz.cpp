#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:

    string FizzOrBuzz(int i){
        if(i%3==0 && i%5==0){
            return "FizzBuzz";
        }
        if(i%3==0){
            return "Fizz";
        }
        if(i%5==0){
            return "Buzz";
        }
        else{
            return to_string(i);
        }
    }

    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=0; i<n; i++){
            ans.push_back(FizzOrBuzz(i+1));
        }
        return ans;
    }
};
    return 0;
}