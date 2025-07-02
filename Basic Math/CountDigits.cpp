#include<bits/stdc++.h>
using namespace std;

// My Way
void countDigits(int i){
    // cout<<"the integer i got is "<< i<<endl;
    string str = to_string(i);
    // cout<<"it is now in string as "<< str<<endl;
    int s = str.length();
    cout<<"the number "<<i<<" has "<<s<<" digits."<<endl;
}

//Without Changing to string

int countDigitsWithoutString(int i){

    // Initialize a variable 'cnt' to
    // store the count of digits.
    int cnt = int (log10(i)+1);

    // The expression (int)(log10(n)+1)
    // calculates the number of digits in 'n'
    // and casts it to an integer.
    
    // Adding 1 to the result accounts
    // for the case when 'n' is a power of 10,
    // ensuring that the count is correct.
   
    // Finally, the result is cast
    // to an integer to ensure it is rounded
    // down to the nearest whole number.
    
    // Return the count of digits in 'n'.
    return cnt;
}


int main(){
    int i;
    cout<<"Enter Your Number = ";
    cin>>i;  
    countDigits(i); 
    int digits = countDigitsWithoutString(i);
    cout<< digits;

    return 0;
}