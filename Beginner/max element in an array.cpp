#include <iostream>
using namespace std;

int main() {
	long int n,i,j,temp;
	cin>>n;
	long int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	    if(a[i]<a[j])
	    {
	     temp=a[i];
	     a[i]=a[j];
	     a[j]=temp;
	    }
	}
	}
	    cout<<a[0];	
	return 0;
}
