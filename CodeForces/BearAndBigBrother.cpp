#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    float n = log10((float)b/a);
    float d = log10(3.0f/2.0f);
    int k = n/d;
    cout<<k+1;
    return 0;
}