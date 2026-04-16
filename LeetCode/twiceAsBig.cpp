#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        int dominantIndex(vector<int> &nums)
        {
            int largest = nums[0];
            int sLargest = INT_MIN;
            int iOfLargest = 0;
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i] > largest)
                {
                    sLargest = largest;
                    largest = nums[i];
                    iOfLargest = i;
                }
                else if (nums[i] > sLargest)
                {
                    sLargest = nums[i];
                }
            }
            if (largest >= 2 * sLargest)
            {
                return iOfLargest;
            }
            else
            {
                return -1;
            }
        }
    };
    return 0;
}