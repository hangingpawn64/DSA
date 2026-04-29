#include<bits/stdc++.h>
using namespace std;

    int minEatingSpeed(vector<int>& piles, int h) {
        int total = accumulate(piles.begin(),piles.end(),0);
        float hours = total/h;
        cout<<"total = "<<total<<" "<<"hours = "<<hours<<endl;
        return ceil(hours);
    }

int main(){
    vector<int>piles = {3,6,7,11};
    cout<<minEatingSpeed(piles, 8);
    return 0;
}