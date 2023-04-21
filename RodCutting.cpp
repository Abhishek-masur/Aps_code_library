#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int n;
    cout << "Enter the Length of the Rod" << endl;
    cin >> n;

    int arr[n + 1] = {0};

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n + 1; i++)
    {
        for (int j = 1; j <= i / 2; j++)
        {
            arr[i] = max(arr[i], max(j * (i - j), j * arr[i - j]));
        }
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "The Maximum Product is:" << arr[n];

    return 0;
}