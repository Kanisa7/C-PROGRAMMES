#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int i=1,n;
	cout<<"Enter the terms of the series\n";
	cin>>n;
	while(i<=n)
	{
		cout<<"\t"<<i;
		i=i+1;
	}
	getch();
}
