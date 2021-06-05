#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
	int a=0;
	int b=1;
	int c=a+b;
	if(n<=1)
	{
		return n;
	}
	for(int i=3;i<=n;i++)
	{ 
		a=b;
		b=c;
		c=a+b;
	}
	return c;
}
int main()
{
	int n;
	cin>>n;
	cout<<fibonacci(n);
	return 0;
}
