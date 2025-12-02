#include <bits/stdc++.h>
using namespace std;

vector<long long> series;

vector<long long> algorithm(long long n)
{
    series.push_back(n);
    n % 2 == 0 ? n = (n / 2) : n = (3 * n + 1);
    if (n == 1)
    {
        return series;
    }
    else
    {
        return algorithm(n);
    }
}

int main()
{
    long long n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        algorithm(n);
        vector<long long>::iterator it = series.begin();
        for (auto it : series)
        {
            cout << it << " ";
        }
        cout << 1;
    }
    return 0;
}