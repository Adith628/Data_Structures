#include <iostream>
using namespace std;

int main()
{
    int i, j, n = 5;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}