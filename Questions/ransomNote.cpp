#include<bits/stdc++.h>
using namespace std;

  bool canConstruct(string ransomNote, string magazine){

  map<char, int>magazineHash;
  for (int i = 0; i<magazine.size(); i++){
   magazineHash[magazine[i]-'a']++;
 }

  //  for(auto it : magazineHash){
  //   cout<<it.first<<"->"<<it.second<<endl;
  //  }
 
  map<char, int>ransomHash;
  for (int i = 0; i<ransomNote.size(); i++){
   ransomHash[ransomNote[i]-'a']++;
 }


 for(int i=0; i<ransomHash.size(); i++) {
  if(ransomHash[i] > magazineHash[i]){
    return false;
  }
 }
 return true;
}


int main() {
  string magazine;
  cin>>magazine;
  
  string ransomNote;
  cin>>ransomNote;
  cout<<canConstruct(ransomNote, magazine)<<endl;

  return 0;
}