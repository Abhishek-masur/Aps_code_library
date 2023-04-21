#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MinCoin(vector<int> nums, int amount)
{
    int dparr[amount + 1] = {0};
    dparr[0] = 0;
    for (int i = 1; i <= amount; i++)
    {
        int m = INT_MAX;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i - nums[j] >= 0)
            {
                if (dparr[i - nums[j]] > 0)
                {
                    m = min(m, (dparr[i - nums[j]]) + 1);
                }
                else if (i - nums[j] == 0)
                {
                    m = min(m, dparr[i - nums[j]] + 1);
                }
            }
        }
        if (m == INT_MAX)
        {
            dparr[i] = 0;
        }
        else
        {
            dparr[i] = m;
        }
    }

    if (dparr[amount] == 0)
    {
        return -1;
    }
    return dparr[amount];
}

int main()
{
    vector<int> coins = {12, 6};
    int amt = 18;

    cout << "Min number of coins required to get " << amt << " is " << MinCoin(coins, amt);

    return 0;
}