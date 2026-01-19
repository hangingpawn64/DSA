#include<bits/stdc++.h>
using namespace std;

    vector<int> plusOne(vector<int>& digits) {
        unsigned long long num = 0;
        for(int i=0; i<digits.size(); i++){
            num = num + digits[i] * pow(10, digits.size() - 1 - i);
        }
        num++;
        vector<int>plusOne;
        string newNum = to_string(num);
        for(int i = 0; i<newNum.size(); i++){
            int a = newNum[i] - '0';
            plusOne.push_back(a);
        }
        cout<<num;
        return plusOne;
    }

int main(){
    vector<int> digits = {6, 1, 4, 5, 3, 9, 0, 1, 9, 5, 1, 8, 6, 7, 0, 5, 5, 4, 3};
    plusOne(digits);
    return 0;
}