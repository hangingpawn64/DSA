#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    string filtered;
    for (char c : s){
        if(isalnum(c)){
            // tolower(c);  --> this is wrong because it does not store the change
            // filtered.push_back(c);   
            filtered +=  tolower(c);
        }
    }

    int left = 0;
    int right = filtered.size() -1;
    while(left < right)
    { 
       if (filtered[left] != filtered[right]) {
        return false;
    }
       left++;
       right--;
    }
    return true;
    
}

// -->recusrion (not for LC)

// bool isPalindrome(int i, string str){
    
//     if(i >= str.size()) return true;
//     if (str[i] != str[str.size()-i-1]) return false;
//     return isPalindrome(i+1, str);
// }

int main(){
    string s;
    cout<<"enter string: ";
    cin>> s;
    // cout<< isPalindrome(0, str);
    cout<< isPalindrome(s);
    return 0;
}