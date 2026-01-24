#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    //Precomputation
    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int cnt=0;
    for(int i=0; i<26; i++){
        if(hash[i] != 0){
            cnt++;
        }
    }

    if(cnt%2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}