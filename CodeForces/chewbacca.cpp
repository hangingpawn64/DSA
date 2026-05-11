#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    string s = to_string(n);
    int fd = s[0] - '0';
    if(fd > 4 && fd < 9 ){
        fd = 9 - fd;
    }
    s[0] = fd + '0';

    for(int i=1; i<s.size(); i++){
        int x = s[i]-'0';
        if(x>4){
            x = 9 - x;
        }
        s[i] = x + '0';
    }
    long long res = stoll(s);
    cout<<res;
    return 0;
}