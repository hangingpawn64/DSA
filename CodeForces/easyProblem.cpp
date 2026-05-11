#include<bits/stdc++.h>
using namespace std;

string easyProblem(){
    int n;
    cin>>n;
    while (n--){
        int a;
        cin>>a;
        if(a == 1){return "HARD";}
    }
    return "EASY";
}
int main(){
    int n;
    cin>>n;
    bool easy = 1;
    while(n--){
        int a;
        cin>>a;
        if(a == 1){
            cout<<"HARD";
            easy = 0;
            break;}
    }
    if(easy){cout<<"EASY";}

 return 0;
}