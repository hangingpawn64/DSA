#include<bits/stdc++.h>
using namespace std;

int main(){
class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size()>b.size()){
            while(a.size() != b.size()){
                b.insert(0,1,'0');
            }
        }
        else if(a.size() < b.size()){
            while(a.size() != b.size()){
                a.insert(0,1,'0');
            }
        }
        int A = a.size()-1;
        int B = b.size()-1;
        bool carry = 0;
        string ans;
        while(A >= 0 || B >= 0){
            if(((a[A] - '0' == 1) && (b[B] - '0' == 1)) && !carry){
                ans.insert(0,1, '0');
                carry = true;
            }
            else if(((a[A] - '0' == 1) && (b[B] - '0' == 1)) && carry){
                ans.insert(0,1, '1');
                carry = true;
            }
            else if(((a[A] - '0' == 0) && (b[B] - '0' == 0)) && carry) {
                ans.insert(0,1, '1');
                carry = false;
            }
            else if(((a[A] - '0' == 0) && (b[B] - '0' == 0)) && !carry) {
                ans.insert(0,1, '0');
                carry = false;
            }
            else if((a[A] - '0' ^ b[B] - '0') && carry){
                ans.insert(0,1, '0');
                carry = true;     
            }
            else if((a[A] - '0' ^ b[B] - '0') && !carry){
                ans.insert(0,1, '1');     
                carry = false;         
            }
            A--; B--;
        }
        if(carry){
            ans.insert(0,1,'1');
        }
        return ans;
    }
};
}