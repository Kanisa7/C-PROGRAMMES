#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"The value of 1st number before swapping : ";
	cin>>a;
	cout<<"The value of 2nd number before swapping : ";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"The value of 1st number after swapping is : "<<a<<endl;
	cout<<"The value of 2nd number after swapping is : "<<b;
	getch();
	
}
