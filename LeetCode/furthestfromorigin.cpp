#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        int furthestDistanceFromOrigin(string moves)
        {
            int cnt = 0;
            int L = 0;
            int R = 0;
            for (auto it : moves)
            {
                if (it == 'L')
                {
                    L++;
                }
                else if (it == 'R')
                {
                    R++;
                }
                else
                {
                    cnt++;
                }
            }
            cnt = cnt + abs(L - R);
            return cnt;
        }
    };
    return 0;
}