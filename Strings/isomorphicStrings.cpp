#include<bits/stdc++.h>
using namespace std;

    bool isIsomorphic(string s, string t) {
        map<char,char>mpp;
        for(int i=0 ; i<s.size(); i++){
            if(mpp.find(s[i]) != mpp.end()){
                cout<<s[i]<<"->"<<mpp[s[i]]<<endl;
                s[i] = mpp[s[i]];
            }
            else{
                cout<<s[i]<<"="<<t[i]<<endl;
                s[i] = t[i];
                mpp[s[i]] = t[i];
            }
        }
        cout<<s<<endl;
        return s == t;
    }

int main(){
    cout<< isIsomorphic("foo", "bar");
    return 0;
}