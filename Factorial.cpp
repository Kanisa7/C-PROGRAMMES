#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int i, fact=1;
	long n;
	cout<<"Enter a number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"The factorial is "<<fact;
	getch();
}
