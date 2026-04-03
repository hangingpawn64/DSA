//Rotating an array left by d places

#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE APPROACH

// vector<int> rotate(vector<int> arr, int d){
//     // actual required rotations (imp if d > arr.size())
//     d = d % arr.size();

//     // store first d nums in temp
//     vector<int>temp;
//     for(int i=0; i<d; i++){
//         temp.push_back(arr[i]);
//     }
    
//     // shifting left by d places
//     for(int i=d; i<arr.size(); i++){
//         arr[i-d] = arr[i];
//     }

//     for(int i=arr.size()-d; i<arr.size(); i++){
//         arr[i] = temp[i-(arr.size()-d)]; 
//     }
//     return arr;
// }

// OPTIMAL APPROACH
int main(){
    vector<int> arr = {3,4,5,1,2};
    int d = 3;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d, arr.end());
    reverse(arr.begin(),arr.end());
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}