#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"Even numbers between 700 and 1200(inclusive):\n";
	for(i=700;i<=1200;i++)
		if(i%2==0)
		{
			cout<<i<<"\t";;
		}
	
getch();
}
