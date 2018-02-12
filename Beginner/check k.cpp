#include <iostream>
using namespace std;

int main() {
	int n,k,i,flag=0;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]==k)
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
