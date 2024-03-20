#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 0;
    cout << "Enter a number : ";
    cin >> n;

    // time complexity O(n)
    // while (n > 0)
    // {
    //     n = n / 10;
    //     i++;
    // }

    //  Time complexity O(1)
    // {
    // string a = to_string(n);
    // i = a.length();
    // }

    // Time complexity O(1)
    i = floor(log10(n) + 1);
    cout << "No of digits : " << i << endl;
}