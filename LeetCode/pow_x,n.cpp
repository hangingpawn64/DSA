#include <bits/stdc++.h>
using namespace std;

int main()
{

    class Solution
    {
    public:
        double myPow(double x, int n)
        {
            if (x == 1)
            {
                return 1;
            }
            if (n == 0)
            {
                return 1;
            }

            long long N = n;
            if (N < 0)
            {
                x = 1 / x;
                N *= -1;
            }

            double res = 1;
            while (N > 0)
            {
                if (N % 2 != 0)
                {
                    res *= x;
                }
                x *= x;
                N /= 2;
            }
            return res;
        }
    };
    return 0;
}