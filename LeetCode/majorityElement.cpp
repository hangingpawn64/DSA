#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        int majorityElement(vector<int> &nums)
        {
            map<int, int> mpp;
            for (int i = 0; i < nums.size(); i++)
            {
                mpp[nums[i]]++;
            }
            pair<int, int> majority = {0, mpp[0]};
            for (auto it : mpp)
            {
                if (it.second > majority.second)
                {
                    majority = {it.first, it.second};
                }
            }
            return majority.first;
        }
    };
    return 0;
}