#include<iostream>
using namespace std;
int main()
 {
	int n;
	cin>>n;
	
	int row=1;
	while(row<=n)
	{
	//print space
	int space=row -1;
	while(space)
	{
	
	cout<<" ";
	space = space -1;
    }
	//print 1st triangle
	int j=1;
	while(j<=row)
	{
		cout<<"*";
	     j=j+1; 
    }
     cout<<endl;
     row=row+1;
 }
}
	
