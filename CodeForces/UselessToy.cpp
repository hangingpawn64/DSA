#include<bits/stdc++.h>
using namespace std;

int main(){
    string rotation;
    int n;
    
    for(int i=0; i<2; i++){
        cin>>rotation[i];
    }

    cin>>n;

    char start = rotation[0];
    char end = rotation[1];

    n = n % 4;

    char cw, ccw;
    char positions[] = {'v','<','^','>'};

    if(n == 2){
        cout<<"undefined";
        return 0;
    }

    if(start == 'v'){
        cw = positions[n+0];
    }
    else if(start == '<'){
        cw = positions[n+1];
    }
    else if(start == '^'){
        cw = positions[n+2];
    }
    else{
        cw = positions[n+3];
    }

    if(end == cw){
        cout<<"cw";
    }
    else{
        cout<<"ccw";
    }

    return 0;
}