// Let’s first try to understand the importance of hashing using an example:

// Given an array of integers: [1, 2, 1, 3, 2] and we are given some queries: [1, 3, 4, 2, 10]. For each query, we need to find out how many times the number appears in the array. For example, if the query is 1 our answer would be 2, and if the query is 4 the answer will be 0.

// Similarly, the following will be the answers to the given queries:

// Query:  1 3 4 2 10
// Answer: 2 1 0 2 0

// BRUTE FORCE APPROACH:

// #include <bits/stdc++.h>
// using namespace std;

// int arr[5] = {1, 2, 1, 3, 2};
// int q[5] = {1, 3, 4, 2, 10};
// int num = 0;

// int counter( int num)
// {
//     int cnt = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] == num)
//         {
//             cnt += 1;
//         }
//     }
//     return cnt;
// }

// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<counter(q[i])<<" ";
//     }
//     return 0;
// }

// USING HASHING:

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n;
//   cin>> n;
//   int arr[n];
//   for(int i = 0; i<n; i++){
//     cin>> arr[i];
//   }

//   // Precomputation
//   int hash[13] = {0};
//   for (int i=0; i<n; i++){
//     hash[arr[i]] += 1;
//   }
  
//   int q;
//   cin>>q;
  
//   while (q--){
//     int number;
//     cin>>number;
//     //Fetching
//     cout<<hash[number]<<" ";
//   }
//     return 0;
// }

// CHARACTER HASHING:

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   string s;
//   cin>>s;
  
//   int q;
//   cin>>q;
  
//   //Precomputation
//   int hash[26] = {0};
//   for(int i=0; i<s.size(); i++){
//     hash[s[i] - 'a']++;
//   }
  
//   while(q--){
//     char c;
//     cin>>c;
//     //Fetching
//     cout<<hash[c - 'a']<<endl;
//   }
// }


// USING MAP:

#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  
  //Precompute
  map<int, int> mpp;
  for(int i=0; i<n; i++){
    mpp[arr[i]]++;
  }

  //Iterating in map
  // for(auto it : mpp){
  //   cout<<it.first<<"->"<<it.second<<endl;
  // }
  
  
  int q;
  cin>>q;
  while (q--){
    int number;
    cin>>number;
    
    //Fetching
    cout<<mpp[number]<<endl;
  }
  return 0;
}