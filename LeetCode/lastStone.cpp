#include<bits/stdc++.h>
using namespace std;

    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            int first = stones[stones.size()-1];
            int second = stones[stones.size()-2];
            int res = abs(first-second);

            cout<<"popped: "<<stones[stones.size()-1]<<endl;
            stones.pop_back();
            cout<<"popped: "<<stones[stones.size()-1]<<endl;
            stones.pop_back();

            if(res > 0){stones.push_back(res);}
        }
        if(stones.size()==0){return 0;}
        return stones[0];
    }

int main(){
    vector<int>stones = {2,2};
    cout<<lastStoneWeight(stones);
    return 0;
}