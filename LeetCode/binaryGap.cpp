#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        string toBinary(int n)
        {
            int len = (log2(n));
            return bitset<32>(n).to_string().substr(32 - len - 1);
        }

        int binaryGap(int n)
        {
            string s = toBinary(n);
            int prevOne = 0;
            int Hgap = 0;
            int gap;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '1')
                {
                    gap = i - prevOne;
                    prevOne = i;
                }
                if (gap >= Hgap)
                {
                    Hgap = gap;
                }
            }
            return Hgap;
        }
    };
    return 0;
}