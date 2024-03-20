#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 0;
    cout << "Enter a number : ";
    cin >> n;
    while (n > 0)
    {
        i = i * 10 + (n % 10);
        n = n / 10;
    }
    cout << i << endl;
}