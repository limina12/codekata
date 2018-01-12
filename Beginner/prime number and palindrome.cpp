#include <iostream>
using namespace std;

int main() {
	int n,i,count=0,num,rev=0,rem=0;
	cin>>n;
	num=n;
	for(i=1;i<=num;i++)
	{
	    if(num%i==0)
	    {
	        count++;
	    }
	}
	if(count==2)
	{
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
	}
	else
	{
	    cout<<"no";
	}
	return 0;
}
