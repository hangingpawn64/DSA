#include<bits/stdc++.h>
using namespace std;

string isYes(string s){
    if(s == "yes" || s == "Yes" || s == "yEs" || s == "yeS" || s == "YEs" || s == "yES" || s == "YeS" || s == "YES"){
        return "YES";
    }
    return "NO";
    
}

int main(){
    int t;
    cin>>t;
    string s;
    string arr[t];

    for(int i=0; i<t; i++){
        cin>> s;
        arr[i] = s;
    }

    for(int i=0; i<t; i++){
        cout<<isYes(arr[i])<<endl;
    }
    return 0;
}