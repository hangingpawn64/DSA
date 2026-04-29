#include <bits/stdc++.h>
using namespace std;

bool isBadVersion(int v){}

int main()
{
    // The API isBadVersion is defined for you.
    // bool isBadVersion(int version)


    class Solution
    {
    public:
        int firstBadVersion(int n)
        {
            int low = 0, high = n;
            while (low < high)
            {
                int mid = low / 2 + high / 2;
                if (isBadVersion(mid))
                {
                    high = mid;
                }
                else
                {
                    low = mid + 1;
                }
            }
            return high;
        }
    };
    return 0;
}