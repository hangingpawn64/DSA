#include<bits/stdc++.h>
using namespace std;

int main(){
  map<int,int> mpp;
  for(int i=0; i<5; i++){
    mpp.insert({i,i+1});
  }
  cout<<mpp.size();
  return 0;
}