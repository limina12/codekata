#include <iostream>
using namespace std;
int main() {
	int n,i,k,c=0;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]%2==1)
	    {
	        c++;
	}
	if(c==k)
	{
	    cout<<a[i];
	    break;
	}
	}
	return 0;
}
