#include <iostream>
using namespace std;

int main() {
	int n,num,rev=0,rem=0;
	cin>>n;
	num=n;
	while(num>0)
	{
	    rem=num%10;
	    rev=(rev*10)+rem;
	    num=num/10;
	}
	if(n==rev)
	{
	    cout<<"yes";
	}
	else
	{
	    cout<<"no";
	}
	return 0;
}
