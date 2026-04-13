#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        int getMinDistance(vector<int> &nums, int target, int start)
        {
            int res1 = INT_MAX, res2 = INT_MAX;
            for (int i = start; i < nums.size(); i++)
            {
                if (nums[i] == target)
                {
                    res1 = i - start;
                    break;
                }
            }
            for (int i = start; i >= 0; i--)
            {
                if (nums[i] == target)
                {
                    res2 = start - i;
                    break;
                }
            }
            if (res1 > res2)
            {
                return res2;
            }
            else
            {
                return res1;
            }
        }
    };
    return 0;
}