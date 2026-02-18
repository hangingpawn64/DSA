#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        vector<int> plusOne(vector<int> &digits)
        {
            int num = 0;
            int cnt = 0;
            vector<int> plusOneDigits = {1};
            for (int i = 0; i < digits.size(); i++)
            {
                if (digits[i] == 9)
                {
                    cnt++;
                }
            }
            if (cnt == digits.size())
            {
                while (cnt--)
                {
                    plusOneDigits.push_back(0);
                }
                return plusOneDigits;
            }
            for (int i = digits.size() - 1; i >= 0; i--)
            {
                if (digits[i] < 9)
                {
                    digits[i]++;
                    return digits;
                }
                else
                {
                    digits[i] = 0;
                }
            }
            return digits;
        }
    };
}