#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int num) {
    string number = to_string(num);
    string rev;
    for (int i = number.length()-1; i >= 0; i--)
    {
        rev.push_back(number[i]);
    }
    return number == rev ;
}

int main(){
    int num;
    cin>>num;
    cout<< isPalindrome(num);

    return 0;
}