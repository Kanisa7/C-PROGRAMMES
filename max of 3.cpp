#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 3 numbers\n";
	cin>>a>>b>>c;
	if(a>b&&b>c)
	{
		cout<<a<<" is greater";
	}
	else if(b>a&&b>c)
	{
		cout<<b<<" is greater";
	}
	else
	{
		cout<<c<<" is greater";
	}
	getch();
}
