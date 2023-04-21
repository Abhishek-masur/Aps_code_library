#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    // Your code here
    if (arr[0] >= n - 1)
        return 1;
    int maxi, ind;
    int cnt = arr[0];
    int i = 0, j;
    int jump = 0;
    while (cnt < n - 1)
    {
        maxi = INT_MIN;
        ind = i + arr[i];
        for (j = i + 1; j <= i + arr[i] && j < n - 1; j++)

        {
            if (arr[j] > maxi)
            {
                maxi = arr[j];
                ind = j;
            }
        }
        cout << "MAX" << maxi << endl;
        i = ind;
        cnt += arr[i];
        jump++;
    }

    return jump + 1;
}
int main()
{
    int arr[10] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};
    cout << minJumps(arr, 10);
    return 0;
}