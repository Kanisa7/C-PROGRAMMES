#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,s=0,r,p;
	cout<<"Enter a number and heck wether it is armstrong or not : ";
	cin>>n;
	p=n;
	while(n>0)
	{
	   r=(n%10);
	   s=s+(r*r*r);
	   n=(n/10);	
	}	
	if(s==p)
	cout<<"The number is armstong";
	else
	cout<<"The number is not armstong";
	getch();
	}
