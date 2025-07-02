#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    long long rev = 0; // not int coz int is 32-bit

    while (x != 0)
    {
        int lastDigit = x % 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && lastDigit > 7))
            return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && lastDigit < -8))
            return 0;
        x = x / 10;
        rev = (rev * 10) + lastDigit;
    }
    return rev;
}

int main()
{
    int x;
    cout << "enter your number: ";
    cin >> x;
    cout << reverse(x);
    return 0;
}