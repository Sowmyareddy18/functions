#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(int l,int r,string s)
{
	if(l>=r)
	{
		return true;
	}
     if(s[l]!=s[r])
     {
     	return false;
	}
	return ispalindrome(l+1,r-1,s);
}
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	if(ispalindrome(0,n-1,s))
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not palindrome";
	}
	return 0;
}
