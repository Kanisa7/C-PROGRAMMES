#include<iostream>
using namespace std;
int main()
{
	int n,s,r,a,p,b,c,d,e,f,g,h,i;
	
	cout<<"Enter the amount : ";
	cin>>n;
	s=n/100;
	p=n%100;
	r=p/50;
	a=p%50;
	b=a/20;
	c=a%20;
	d=c/50;
	e=c%50;
	f=e/5;
	g=e%5;
	h=g/1;
	i=g%1;
	cout<<"The amount should be given in the form of\n" << s << " = 100 Rupees\n "<< r <<" = 50 Rupees\n "<< b <<"= 20 Rupees\n "<< d << "= 10 Rupees\n" << f<<" = 5 Rupees\n " << h<< " = 1 Rupees"; 
}

