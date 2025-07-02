#include<bits/stdc++.h>
using namespace std;

// vector<int> reverse(int x){
//     string str = to_string(x);

//     for (int i=str.length(); i >= 0; i--)
//     {
//         vector<int> v;
//         v.push_back(str[i]);
//         return v;
//     }
    
// }
int reverse(int x){

    string str = to_string(x);
    for (int i=str.length() - 1; i >= 0 ; i--)
    {
        return str[i];
    }
    }

int main(){
    int x;
    cout<<"enter your number: ";
    cin>>x;
    cout<<reverse(x);
    return 0;
}