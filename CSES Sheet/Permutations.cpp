#include<bits/stdc++.h>
using namespace std;

// void swapp(int a, int b){
//     int temp;
//     temp = a;
//     a=b;
//     b=temp;
// }
void beautiful(int arr[], int n){
    for(int i=0; i<n-3; i++){
        if((arr[i]+1 == arr[i+1]) || (arr[i]-1 == arr[i+1])){
            // swapp(arr[i], arr[i+3]);
            int temp=arr[i];
            arr[i]=arr[i+3];
            arr[i+3] = temp;
            beautiful(arr, n);
        }
    }
}
int main(){
    int n;
    cin>>n;
    if(n==2 || n==3){cout<<"NO SOLUTION";}
    else{
        int arr[n]={0};
        for(int i=0; i<n; i++){
            arr[i]=i+1;
        }
        beautiful(arr, n);
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}