#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt =0;
    for(int i=0; i<s.size();i++){
        if(s[i] == '4' || s[i] == '7'){
            cnt++;
        }
    }
    string count = to_string(cnt);
    cnt = 0;
    for(int i=0; i<count.size();i++){
        if(!(count[i] == '4' || count[i] == '7')){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}