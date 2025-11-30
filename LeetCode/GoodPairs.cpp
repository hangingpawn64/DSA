#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        int numIdenticalPairs(vector<int> &nums)
        {
            map<int, int> mpp;

            int sum = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                mpp[nums[i]]++;
            }
            for (map<int, int>::iterator it = mpp.begin(); it != mpp.end(); ++it)
            {
                if (it->second > 1)
                {
                    sum += (((it->second) * ((it->second) - 1)) / 2);
                }
            }
            return sum;
        }
    };
    return 0;
}