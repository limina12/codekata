#include <iostream>
using namespace std;
int main() {
	int n,count=0,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    count=0;
	    for(j=0;j<n;j++)
	    {
	        if(a[i]==a[j])
	        {
	            count++;
	        }
	    }
	    if(count==1)
	    {
	        cout<<a[i];
	    }
	}
	return 0;
}
