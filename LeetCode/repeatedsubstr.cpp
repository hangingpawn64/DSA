#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "ababab";
    string s1 = s.substr(0,s.size()/2);
    string s2 = s.substr(s.size()/2, s.size()/2);
    cout<<s1<<endl<<s2;
    return 0;
}