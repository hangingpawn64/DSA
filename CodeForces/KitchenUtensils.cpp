#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int,int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    int HF = 0;
    for(auto it : mpp){
        if(it.second > HF){HF = it.second;}
    }

    while(HF % k != 0){
        HF++;
    }
    cout<< (mpp.size()*HF) - n;
    return 0;
}