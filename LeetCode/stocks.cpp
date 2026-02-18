#include<bits/stdc++.h>
using namespace std;

    int maxProfit(vector<int>& prices) {   
        int cheapest = prices[0];
        int profit = 0;
        int maxProfit = 0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i] < cheapest){ cheapest = prices[i];}
            else{
                profit = prices[i] - cheapest;
                if(profit > maxProfit){maxProfit = profit;}
            }
        }
        return maxProfit;
    }

int main(){
    vector<int> v = {7,1,5,3,6,4};
    cout<<maxProfit(v);
    return 0;
}