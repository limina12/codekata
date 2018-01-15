#include <iostream>
using namespace std;

int main() {
	int n,i,m,l,j,temp;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]>a[j])
	        {
	            temp=a[i];
	            a[i]=a[j];
	            a[j]=temp;
	        }
	    }
	}
	if(n%2==1)
	{
	    m=n/2;
	    cout<<a[m];
	}
	else
	{
	    m=(n-1)/2;
	    l=n/2;
	    cout<<a[m]<<" "<<a[l];
	}
	return 0;
}
