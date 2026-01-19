#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string arr[n];
    string s;
    for(int i=0; i<n; i++){
        cin>> s;
        arr[i] = s;
    }

    for(int i=0; i<n; i++){
        if(arr[i].size() <= 10){
            cout<<arr[i]<<endl;
        }
        else{
            cout<<arr[i][0]<<arr[i].size()-2<<arr[i][(arr[i].size())-1]<<endl;
        }
    }
    return 0;
}