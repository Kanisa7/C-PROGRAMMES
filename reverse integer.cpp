#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	 int ans=0;
	 while(n!=0)
	 {
	 	int digit = n%10;
	 	ans = (ans *10)+ digit;
	 	n=n/10;
	}
	if ((ans>int_Max/10)||(ans<int_min/10))
	{
		return 0;
	}
	return ans;
}
