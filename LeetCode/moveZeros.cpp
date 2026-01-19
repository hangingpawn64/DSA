#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};

    // Remove all even numbers from vector v
    auto ne = remove_if(v.begin(), v.end(),
                        [](int x) {
                          return x % 2 == 0;
                        });

    for (auto i : v)
        cout << i << " ";
    return 0;
}