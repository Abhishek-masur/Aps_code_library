#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    set<vector<int>> set;
    vector<vector<int>> output;
    for(int i=0; i<n-3; i++)
    {
        for(int j=i+1; j<n-2; j++)
        {
            int low = j+1, high = n-1;

            while(low < high)
            {
                long long int c = 0;
                c += nums[low];
                c += nums[high];
                c += nums[i];
                c += nums[j];
                if(c < target)
                {
                    low++;
                }
                else if(c > target)
                {
                    high--;
                }
                else
                {
                    set.insert({nums[i], nums[j], nums[low], nums[high]});
                    low++;
                    high--;
                }
            }
        }
    }
    for(auto it : set)
    {
        output.push_back(it);
    }
    return output;
}


int main()
{
    int N,target;
    cin >> N >> target;
    vector<int>V;
    for(int i = 0; i < N; i++)
    {
        int f;
        cin >> f;
        V.push_back(f);
    }

    vector<vector<int>>h;
    h = fourSum(V, target);
    for(int i = 0; i < h.size(); i++)
    {
        for(int j = 0; j < h[i].size(); j++)
        {
            cout << h[i][j] << " ";
        }

        cout << endl;
    }

}
