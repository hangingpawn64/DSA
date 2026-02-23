#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        string largestOddNumber(string num)
        {
            for (int i = num.size() - 1; i >= 0; i--)
            {
                if (num[i] % 2 == 0)
                {
                    num.erase(i);
                }
                else
                {
                    break;
                }
            }
            return num;
        }
    };
    return 0;
}