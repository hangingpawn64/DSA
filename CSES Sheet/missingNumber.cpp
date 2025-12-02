// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>> n;
//     long long numsSum =0;
//     vector<int> nums(n-1);

//     for(int i = 0; i < n-1; i++){
//         cin>> nums[i];
//         numsSum += (long long)nums[i];  
//     }

//     // long long numsSum = accumulate(nums.begin(), nums.end(), 0LL);
//     long long nSum = 1LL* (n * (n+1)) / 2;
//     cout<< nSum-numsSum;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    long long numsSum = 0;
    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        numsSum += (long long)x;   // accumulate in long long
    }

    long long nSum = 1LL * n * (n + 1) / 2; // force long long multiplication
    cout << (nSum - numsSum) << '\n';
    return 0;
}
