#include<bits/stdc++.h>
using namespace std;
bool isEven(int n)
{
	if(n%2==0)
	{
		return true;
	}
	return false;
}
int main()
{
	int n=10;
	cout<<isEven(n);
}
