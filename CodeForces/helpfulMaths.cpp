#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int arr[4] = {0,0,0,0};

    vector<char> v;
    for(int i=0; i< s.size(); i++){
        if(s[i] == '1'){
            arr[1]++;
        }
        if(s[i] == '2'){
            arr[2]++;
        }
        if(s[i] == '3'){
            arr[3]++;
        }
    }

    for(int i=0; i<arr[1]; i++){
        v.push_back('1');
        v.emplace_back('+');
    }

    for(int i=0; i<arr[2]; i++){
        v.push_back('2');
        v.emplace_back('+');
    }

    for(int i=0; i<arr[3]; i++){
        v.push_back('3');
        v.emplace_back('+');
    }

    v.pop_back();

    for(auto it:v){
        cout<<it;
    }

    return 0;
}