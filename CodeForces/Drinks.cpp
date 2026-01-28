#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        arr[i] = p;
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    float result = (float)sum/n;
    cout<<result;
    return 0;
}