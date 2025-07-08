// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cin>> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     // Precomputation 
    
//     int hash[13] = {0};  // hash array of 13 elements all initially 0.
//                          // 13 was taken just for example,
//                          // we will choose based on questions req.
//                          // inside main() it can be upto 10^6 , declare globally to go upto 10^7.
//     for(int i=0; i<n; i++){
//         hash[arr[i]] += 1;
//     }

//     int q; //queries
//     cin >> q;
//     while (q--)
//     {
//         int number;
//         cin>>number;
//         cout<< hash[number]<< " "; // fetching
//     }
    
//     return 0;
// }

               // CHARACTER HASHING

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>> s;

//     // precompute
//     int hash[256] = {0};
//     for (int i=0; i<256; i++){
//         hash[s[i]]++;
//     }

//     int q;
//     cin>>q;
//     while (q--)
//     {
//         char c;
//         cin>> c;
//         // fetch
//         cout<< hash[c]<<endl;
//     }
    
//     return 0;
// }

//               By Mapping

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    map<int ,int> mpp;

    for(int i=0; i<n; i++){
        cin>> arr[i];
        mpp[arr[i]]++;
    }


    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

        for(auto it : mpp){
        cout<<it.first<<","<<it.second;
    }

    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>> number;
        cout<<mpp[number];
    }
    
    return 0;
}