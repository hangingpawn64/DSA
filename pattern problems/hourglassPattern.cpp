#include <iostream>
using namespace std;

int main()
{
    int n;
        cout << "Enter number of lines: ";
    cin >> n;
    int half = n/2;
    for (int i = 0; i <= half; i++)
    {
       
        for (int k = 0; k < half - i ; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* "; 
        }
        cout << endl;
    }
    for (int i = half-1; i >= 0; i--)
    {
        for (int k = half - i-1; k>=0 ; k--)
        {
            cout << " ";
        }
        for (int j = i; j >=1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

