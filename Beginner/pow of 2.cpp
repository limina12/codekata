#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int n,i,c,flag=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    c=pow(2,i);
	    if(c==n)
	    {
	        flag=1;
	    }
	}
	if(flag==1)
	{
	    cout<<"yes";
	}
	else
	{
	    cout<<"no";
	}
	return 0;
}
