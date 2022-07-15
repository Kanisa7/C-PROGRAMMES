#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int r,n,s=0;
	cout<<"Enter a number to get its sum of digits :";
	cin>>n;
	while(n>0)
	{
		r=(n%10);
		s=s+r;
		n=n/10;
	}
	cout<<"Sum of digits is :"<<s;
	getch();
}
