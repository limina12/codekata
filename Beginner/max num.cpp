#include <iostream>
using namespace std;
int main() {
	int a[10],max=0,i;
	for(i=0;i<10;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
	    if(max<a[i])
	    {
	        max=a[i];
	    }
	}
	cout<<max;
	return 0;
}
