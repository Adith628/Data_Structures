/*

Selection Sort
Find the minimum element in the unsorted array and swap it
with the element at the beginning

*/

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int front = 0, minel = INT_MAX, temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j++; j < n)
        {

            minel = min(arr[j], minel);
            temp = arr[j];
            arr[j] = minel;
        }
    }
}

int main()
{
    int i, n;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
}