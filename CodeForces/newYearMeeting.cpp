#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;

    int d1 = abs(x-y);
    int d2 = abs(y-z);
    int d3 = abs(x-z);

    if(d1>d2 && d1>d3){
        cout<< d2+d3;
    }
    else if(d2>d3 && d2>d1){
        cout<< d1+d3;
    }
    else{
        cout<<d1+d2;
    }

    return 0;
}