//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1
// https://leetcode.com/problems/house-robber/description/

// Stickler Thief (Stolen value Problem)

// given n houses rob in such a way that get max value
// but never rob consequetive houses

class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int a[], int n)
    {
        int dp[n+1];
        dp[0]=0;
        dp[1]=a[0];
        for(int i=2;i<=n;i++){
            dp[i]=max(dp[i-1],dp[i-2]+a[i-1]);
        }
        return dp[n];

		// int p1=0,p2=0,dp;
        // for(int i=0;i<a.size();i++)
        // {
        //     dp=max(p1,p2+a[i]);
        //     p2=p1;
        //     p1=dp;
        // }
        // return p1;
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends