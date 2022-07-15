#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,ch;
cout<<"Enter the value of 2 numbers\n";
cin>>a>>b;
cout<<"Enter 1 for addition,2 for subtraction,3 for multiplication,4 for division";
cin>>ch;
switch(ch)
{
	case 1:
	{
		c=a+b;
		cout<<"The sum is "<<c;
		break;															
	}
	case 2:
	{
		d=a-b;
		cout<<"The difference is "<<d;
		break;
	}
	case 3:
	{
		e=a*b;
		cout<<" The multiplication is "<<e;
		break;
	}
	case 4:
	{
		f=a*b;
		cout<<"The quotient is "<<f;
		break;
	}
default:
	{
	cout<<"Wrong Choice";
}
	}
	getch();
}
