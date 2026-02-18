#include<bits/stdc++.h>
using namespace std;

    int addDigits(int num) {
        if(num / 10 == 0){return num;}
        string numString = to_string(num);
        int sum = 0;
        for(int i=0; i<numString.size(); i++){
            sum += (int)numString[i] - '0';
        }
        return addDigits(sum);
    }

int main(){
    cout<<addDigits(38);
    return 0;
}