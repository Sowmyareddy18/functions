#include<bits/stdc++.h>
using namespace std;
void compare(int num1,int num2,int num3)
{
	if(num1>num2 && num1>num2)
     {
     	cout<<num1<<" is greater "<<"\n";
	}
	else if(num2>num1 &&num2>num3)
	{
		cout<<num2<<"is greater"<<"\n";
	}
	else
	{
		cout<<num3<<"is greater"<<"\n";
	}
}
int main()
{
	int num1=10;
	int num2=30;
	int num3=40;
	compare(num1,num2,num3);
	return 0;
}
