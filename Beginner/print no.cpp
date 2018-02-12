#include <iostream>
using namespace std;

int main() {
	int n,k,i;
	cin>>n>>k;
	int a[n];
	for(i=1;i<=n;i++)
	{
	    cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
	    if(i==k)
	    {
	        cout<<a[i];
	        break;
	    }
	}
	    
	
	    return 0;
}
