#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            vector<int>::iterator it1 = nums.begin();
            vector<int>::iterator it2 = nums.begin();
            vector<int> result;
            for (int i = 0; i < nums.size(); i++)
            {
                for (int j = i; j < nums.size(); j++)
                {
                    if (nums[i] + nums[j] == target && i != j)
                    {
                        result.push_back(i);
                        result.push_back(j);
                    }
                }
            }
            return result;
        }
    };
    return 0;
}