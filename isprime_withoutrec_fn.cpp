#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
	if(n<2)
	{
		return false; 
	}
	if(n==2)
	{
		return true;
	}
	else
	{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
			break;
		}
	}
     }
	return true;
}
int main()
{
	int n;
	cin>>n;
	if(isPrime(n))
	{
		cout<<"prime";
	}
	else
	{
		cout<<"not prime";
	}
	return 0;
}
