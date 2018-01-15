#include <iostream>
using namespace std;

int main() {
	int n1,n2,i,temp=0,rem=0,sum=0;
	cin>>n1>>n2;
	for(i=n1+1;i<n2;i++)
	{
	    temp=i;
	    sum=0;
	    rem=0;
	    while(temp>0)
	    {
	        rem=temp%10;
	        sum=sum+(rem*rem*rem);
	        temp/=10;
	    }
	    if(i==sum)
	    {
	        cout<<i<<" ";
	    }
	}
	return 0;
}
