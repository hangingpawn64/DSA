// MANUAL ASCII CONVERSION
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     class Solution
//     {
//     public:
//         string toLowerCase(string s)
//         {
//             string res;
//             for (int i = 0; i < s.size(); i++)
//             {
//                 if (s[i] <= 90 && s[i] >= 65)
//                 {
//                     char c = s[i] + 32;
//                     res += c;
//                 }
//                 else
//                 {
//                     res += s[i];
//                 }
//             }
//             return res;
//         }
//     };
// }

// using inbuilt function (c)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        string toLowerCase(string s)
        {
            transform(s.begin(), s.end(), s.begin(),
                      [](unsigned char c)
                      { return std::tolower(c); });
            return s;
        }
    };
    return 0;
}