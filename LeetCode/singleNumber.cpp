#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        int singleNumber(vector<int> &nums)
        {
            int ans = 0;
            for (auto it : nums)
            {
                ans ^= it;
            }
            return ans;
        }
    };
    return 0;
}