#include<bits/stdc++.h>
using namespace std;
int dp[100000];
int factorial(int n)
{
	if(n>1)
	return dp[n]=n*factorial(n-1);
	else
	return 1;
	if(dp[n]!=-1) 
	{
		return dp[n];
	}
}
int main()
{
	int n,fact;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		dp[i]=-1;
	}
	fact=factorial(n);
	cout<<fact<<"\n";
	for(int i=0;i<=n;i++)
	{
		cout<<dp[i]<<" ";
	}
	return 0;
}
