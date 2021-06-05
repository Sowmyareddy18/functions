#include<bits/stdc++.h>
using namespace std;
void Swap(int &n1,int &n2)
{
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
int main()
{
	int num1=10;
	int num2=20;
	Swap(num1,num2);
	cout<<num1<<" "<<num2;
	return 0;
}
