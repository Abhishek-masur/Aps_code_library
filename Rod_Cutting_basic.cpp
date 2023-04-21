#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Rod Cutting Basic

// Given rod of length n ,
// divide it into 2 pieces so that product of their lengths is maxinum

int main()
{
    int n;
    cin>>n;

    if(n%2==0)
        cout<<(n/2)*(n/2);
    else
        cout<<((n+1)/2)*((n-1)/2);
	return 0;
}