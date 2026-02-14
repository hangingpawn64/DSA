#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int Mlen = 1;
    int len = 1;
    for(int i=1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            len++;
            if(len >= Mlen){Mlen = len;}
        }
        else{
            if(len >= Mlen){Mlen = len;}
            len = 1;
        }
    }
    cout<<Mlen;
    return 0;
}