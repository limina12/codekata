#include <iostream>
using namespace std;

int main() {
	int n,sum=0,i,avg=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    sum=sum+a[i];
	}
	avg=sum/n;
	cout<<avg;
	return 0;
}
