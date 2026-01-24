#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    vector<int> arr;
    cin>>n>>k;

    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    int cnt=0;
    for(auto it: arr){
        if(it >= arr[k-1] && it > 0){
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}