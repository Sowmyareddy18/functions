#include<bits/stdc++.h>
using namespace std;
int* fun()
{
	int* arr=new int[50];
	arr[0]=10;
	arr[1]=20;
	return arr;
}
int main()
{
	int *p=fun();
	cout<<p[0]<<" "<<p[1];
	return 0;
}
