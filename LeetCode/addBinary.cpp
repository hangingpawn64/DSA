#include<bits/stdc++.h>
using namespace std;

    string toBinary(int n){
        if(n==0){return "0";}
        else{
            int len = (int)(log2(n));
            return bitset<32>(n).to_string().substr(32-len-1); 
        }
    }

    int binToDec(string s){
        int num=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1'){
                num += 1 * (pow(2, s.size() - 1 - i));
            }
        }
        return num;
    }

    string addBinary(string a, string b) {
        int numA = binToDec(a);
        int numB = binToDec(b);
        int sum = numA+numB;
        string res = toBinary(sum);
        return res;
    }

int main(){
    cout<<addBinary("0", "0");
    return 0;
}