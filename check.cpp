#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        int num = lower_bound(arr, arr+n-1,k) - arr;
        if(num == k){cout<<"Yes "<<num+1<<endl;}
        else{cout<<"No "<<num+1<<endl;}
    }
    return 0;
}