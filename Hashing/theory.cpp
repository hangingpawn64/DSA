#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Precomputation 
    
    int hash[13] = {0};  // hash array of 13 elements all initially 0.
                         // 13 was taken just for example,
                         // we will choose based on questions req.
                         // inside main() it can be upto 10^6 , declare globally to go upto 10^7.
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q; //queries
    cin >> q;
    while (q--)
    {
        int number;
        cin>>number;
        cout<< hash[number]<< " "; // fetching
    }
    
    return 0;
}