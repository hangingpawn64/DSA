#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        int stars = i;
        for (int j = stars; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}