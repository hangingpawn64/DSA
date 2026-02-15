#include<bits/stdc++.h>
using namespace std;

int main(){
    long long steps = 0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            steps += arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout<<steps;
    return 0;
}