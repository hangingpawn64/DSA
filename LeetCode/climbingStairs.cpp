#include<bits/stdc++.h>
using namespace std;

    int climbStairs(int n) {
        int ans = 0;
        int prev = 2;
        int prePrev = 1;

        if(n == 2){return 2;}
        if(n == 1){return 1;}

        for(int i=3; i<n+1; i++){
            ans = prev + prePrev;
            prePrev = prev;
            prev = ans;
        }
        return  ans;
    }


int main(){
    cout<<climbStairs(45);
    return 0;
}