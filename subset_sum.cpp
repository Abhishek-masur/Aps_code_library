#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int ss[n+1][sum+1];
    for(int i=1;i<=sum;i++)
        ss[0][i]=0;
    for(int i=0;i<=n;i++)
        ss[i][0]=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(ss[i-1][j]==1)
                ss[i][j]=1;
            else{
                if(a[i-1]>j)
                    ss[i][j]=0;
                else
                    ss[i][j]=ss[i-1][j-a[i-1]];
            }
        }
    }

    cout<<ss[n][sum];
}