#include<bits/stdc++.h>
using namespace std;

long long reqP(long d, long a){
    if(d%a == 0)return d/a;
    else return (d/a) + 1;
}

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    cout<< reqP(n,a) * reqP(m,a);  
    return 0;
}