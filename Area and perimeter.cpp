#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,p,l,b;
	cout<<"Enter the Length and breadth of arectangle";
	cin>>l>>b;
	a=(l*b);
	p=2*(l+b);
	cout<<"The area ad perimeter of a rectangle is" <<a<<"is"<<p;
	getch();
}
