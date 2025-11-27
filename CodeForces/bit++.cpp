#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int X=0;
    cin>> n;
    for(int i=0; i<n; i++){
        string op;
        cin>>op;
        if(op == "X++" || op == "++X"){
            X++;
        }
        else{
            --X;
        }
    }
    cout<< X<<endl;
    return 0;
}
