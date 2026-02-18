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

        bool hasAlternatingBits(int n)
        {
            string s = toBinary(n);
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    return false;
                }
            }
            return true;
        }
    };
    return 0;
}