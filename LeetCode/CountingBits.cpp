// USED BIT MANIPULATION AND DYNAMIC PROGRAMMING HERE
// UNDERSTAND WE CREATED AN IDENTITY : bits[i] = bits[i & i-1] + 1 
// SINCE FOR A NUMBER N, (N & N-1) REMOVES THE LAST SET BIT 
// FROM THE NUMBER MAKING IT HAVE ONE LESS BIT THAN N.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        vector<int> countBits(int n)
        {
            vector<int> bits(n + 1, 0);
            for (int i = 1; i <= n; i++)
            {
                bits[i] = bits[i & (i - 1)] + 1;
            }
            return bits;
        }
    };
    return 0;
}