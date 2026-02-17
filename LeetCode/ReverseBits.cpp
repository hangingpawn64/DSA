#include<bits/stdc++.h>
using namespace std;


int main(){
class Solution {
public:
    string toBinary(int n){
        int len = (log2(n));
        return bitset<32>(n).to_string(); 
    }

    string reverseString(string s){
        int i=s.size()-1;
        int j=0;
        string reversedS = "00000000000000000000000000000000";
        while(i>0){
            reversedS[j]=s[i];
            i--;
            j++;
        }
        return reversedS;
    }

    int binToDec(string s){
        int num=0;
        for(int i=0; i<s.size(); i++){
            num += (s[i] - 48) * (pow(2, 31 - i));
        }
        return num;
    }
    int reverseBits(int n) {
        if(n==0){return 0;}
        string binary = toBinary(n);
        string ReversedBin = reverseString(binary);
        int res = binToDec(ReversedBin);
        return res;
    }
};
}