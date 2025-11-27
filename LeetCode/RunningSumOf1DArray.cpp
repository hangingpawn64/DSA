#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        vector<int> runningSum(vector<int> &nums)
        {
            int a = 0;
            vector<int> sumArray;
            vector<int>::iterator it = nums.begin();
            for (auto it : nums)
            {
                a = a + it;
                sumArray.push_back(a);
            }
            return sumArray;
        }
    };
    return 0;
}