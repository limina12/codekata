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
	   cout<<a[i]<<" "<<i<<endl;
	}
	return 0;
}
