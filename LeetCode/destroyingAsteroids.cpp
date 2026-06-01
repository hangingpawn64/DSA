#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
    public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long newMass = mass;
        if(newMass < asteroids[0]){return false;}
        for(int i = 0; i<asteroids.size()-1; i++){
            if(newMass+asteroids[i] < asteroids[i+1]){return false;}
            else{newMass += asteroids[i];}
        }
        return true;
    }
};
    return 0;
}