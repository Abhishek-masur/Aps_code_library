//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1

// Remove duplicates from sorted Array
// Inplace and return size of distinct elements


class Solution{
public:
    int remove_duplicate(int a[],int n){
        int k=0;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1])
                a[++k]=a[i];
        }
        return k+1;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends