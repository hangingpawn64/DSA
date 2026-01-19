#include <bits/stdc++.h>
using namespace std;

void sortit(vector<int> arr){
        for(int i = 0; i <= arr.size(); i++){
            int j = 1;
            while (j>0 && arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j++;
            }
        }
    }

int main(){
    vector<int> arr = {12, 35, 1, 10, 34, 1 };
    sortit(arr);
    cout<< arr[0];
}