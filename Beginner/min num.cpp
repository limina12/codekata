#include <iostream>
using namespace std;
int main() {
	int a[10],min,i;
	for(i=0;i<10;i++)
	{
	    cin>>a[i];
	}
	min=a[0];
	for(i=1;i<10;i++)
	{
	    if(min>a[i])
	    {
	        min=a[i];
	    }
	}
	cout<<min;
	return 0;
}
