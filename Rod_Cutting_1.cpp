#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// https://www.geeksforgeeks.org/maximum-product-cutting-dp-36/

// Rod Cutting 1

// Given rod of length n ,
// divide it into k pieces so that product of their lengths is maxinum


int main()
{
    int n;
    cin>>n;

    vector<int>dp(n+1,0);
    for(int i=2;i<=n;i++){
        for(int j=1;j<=(i/2);j++){
            dp[i]=max(dp[i],j*(i-j));
            dp[i]=max(dp[i],j*dp[i-j]);
        }
    }
    cout<<dp[n];
	return 0;
}