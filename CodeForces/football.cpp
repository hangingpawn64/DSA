#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int Hcnt=0;
    int cnt = 0;
    for(int i=0; i<s.size()-1;i++){
        s[i+1] == s[i] ? ++cnt : cnt = 0;
        if(cnt >= Hcnt){Hcnt = cnt;}
    }
    if(Hcnt >= 6){cout<<"YES"; return 0;}
    else{cout<<"NO";}
    return 0;
}